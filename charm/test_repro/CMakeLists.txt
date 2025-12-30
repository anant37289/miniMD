cmake_minimum_required(VERSION 3.16)
project(test_repro)

include(${CMAKE_CURRENT_SOURCE_DIR}/../config.cmake)

set(Kokkos_ROOT ${KOKKOS_DIR})
find_package(Kokkos 4.5 REQUIRED CONFIG)

if(Charm_ENABLE_GPU)
    message(STATUS "Building for a GPU backend")
    add_definitions(-DGPU_BACKEND)
    add_definitions(-DCUDA_DIR=\"${CUDA_DIR}\")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GPU_OPTS} ${LD_OPTS}")
else()
    message(STATUS "Building for a CPU backend")
    set(CMAKE_CXX_COMPILER "${CHARMC}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CPU_OPTS} ${LD_OPTS}")
endif()

add_definitions(-DKOKKOS_DIR=\"${KOKKOS_DIR}\")

# Process test.ci
add_custom_command(
    OUTPUT  ${CMAKE_CURRENT_BINARY_DIR}/test.decl.h ${CMAKE_CURRENT_BINARY_DIR}/test.def.h
    COMMAND ${CHARMC} ${CMAKE_CURRENT_SOURCE_DIR}/test.ci
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/test.ci
    COMMENT "Processing test.ci"
)

if(Charm_ENABLE_GPU)
    # Use OBJECT library like the original
    # Include actual miniMD sources to reproduce exact environment
    add_library(test_obj OBJECT test.cpp ../atom.cpp ../neighbor.cpp ${CMAKE_CURRENT_BINARY_DIR}/test.decl.h ${CMAKE_CURRENT_BINARY_DIR}/test.def.h)
    target_include_directories(test_obj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_BINARY_DIR} ${CHARM_DIR}/include)
    target_link_libraries(test_obj Kokkos::kokkos)

    separate_arguments(GPU_LINK_OPTS_LIST NATIVE_COMMAND "${GPU_LINK_OPTS}")
    
    # Custom link command using charmc, exactly like original
    add_custom_command(
        OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/test"
        COMMAND ${CHARMC} ${GPU_LINK_OPTS_LIST} $<TARGET_OBJECTS:test_obj> -o ${CMAKE_CURRENT_BINARY_DIR}/test
        DEPENDS test_obj $<TARGET_OBJECTS:test_obj>
        COMMENT "Linking test build against kokkos and cuda"
        COMMAND_EXPAND_LISTS
    )

    add_custom_target(test_exe ALL
        DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/test"
    )
else()
    add_executable(test test.cpp ${CMAKE_CURRENT_BINARY_DIR}/test.decl.h ${CMAKE_CURRENT_BINARY_DIR}/test.def.h)
    target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} ${CHARM_DIR}/include)
    target_link_libraries(test Kokkos::kokkos)
endif()
