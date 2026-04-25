cmake_minimum_required(VERSION 3.16)
project(miniMD)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

include(${CMAKE_SOURCE_DIR}/config.cmake)

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

add_custom_command(
    OUTPUT  ${BASE_DIR}/miniMD.decl.h ${BASE_DIR}/miniMD.def.h ${BASE_DIR}/block.decl.h ${BASE_DIR}/block.def.h
    COMMAND ${CMAKE_COMMAND} -E chdir ${BASE_DIR}
            ${CHARMC} ${BASE_DIR}/ljs.ci
    DEPENDS ${BASE_DIR}/ljs.ci
    COMMENT "Processing ljs.ci"
)

set(SOURCES
    atom.cpp
    block.cpp
    comm.cpp
    force_eam.cpp
    force_lj.cpp
    input.cpp
    integrate.cpp
    ljs.cpp
    neighbor.cpp
    setup.cpp
    thermo.cpp
)

if(Charm_ENABLE_GPU)
    add_library(miniMD OBJECT ${SOURCES} ${BASE_DIR}/miniMD.decl.h ${BASE_DIR}/miniMD.def.h ${BASE_DIR}/block.decl.h ${BASE_DIR}/block.def.h)
    target_include_directories(miniMD PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CHARM_DIR}/include)
    target_link_libraries(miniMD Kokkos::kokkos)

    separate_arguments(GPU_LINK_OPTS_LIST NATIVE_COMMAND "${GPU_LINK_OPTS}")
    add_custom_command(
        OUTPUT "${CMAKE_BINARY_DIR}/miniMD"
        COMMAND ${CHARMC} ${GPU_LINK_OPTS_LIST} $<TARGET_OBJECTS:miniMD> -o ${CMAKE_BINARY_DIR}/miniMD
        DEPENDS miniMD $<TARGET_OBJECTS:miniMD>
        COMMENT "Linking miniMD build against kokkos and cuda"
        COMMAND_EXPAND_LISTS
    )

    add_custom_target(result ALL
        DEPENDS "${CMAKE_BINARY_DIR}/miniMD"
    )
else()
    add_executable(miniMD ${SOURCES})
    target_include_directories(miniMD PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
    target_link_libraries(miniMD Kokkos::kokkos)
endif()
