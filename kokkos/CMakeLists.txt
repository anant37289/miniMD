cmake_minimum_required(VERSION 3.16)

# Build target: "cuda" (default) or "hip" for AMD GPUs
set(TARGET "cuda" CACHE STRING "Build target: cuda or hip")

# ROCm path (used when TARGET=hip)
set(ROCM_PATH "/opt/rocm-6.2.4" CACHE PATH "ROCm installation path")

# Make ROCm visible to find_package calls
set(CMAKE_PREFIX_PATH "${ROCM_PATH}" ${CMAKE_PREFIX_PATH})

# Set the path to Kokkos (override with -DKokkos_ROOT=... when calling cmake)
set(Kokkos_ROOT "/ccs/home/rrao/kokkos" CACHE PATH "Kokkos installation root")

# If building for HIP, prefer hipcc as the C++ compiler. Must set before project().
if("${TARGET}" STREQUAL "hip")
	if(NOT DEFINED CMAKE_CXX_COMPILER)
		set(CMAKE_CXX_COMPILER "${ROCM_PATH}/bin/hipcc" CACHE FILEPATH "HIP compiler" FORCE)
	endif()
	# Prefer HIP-aware compiler for Kokkos builds
	message(STATUS "Using HIP C++ compiler: ${CMAKE_CXX_COMPILER}")
endif()

project(miniMD CXX)

find_package(Kokkos REQUIRED)

find_package(MPI REQUIRED)

file(GLOB SRC "*.cpp")

add_executable(miniMD ${SRC})

target_link_libraries(miniMD PUBLIC Kokkos::kokkos MPI::MPI_CXX)

if("${TARGET}" STREQUAL "hip")
	# Link AMD HIP runtime if needed
	find_library(AMDHIP64_LIB amdhip64 HINTS ${ROCM_PATH}/lib PATH_SUFFIXES lib lib64)
	if(AMDHIP64_LIB)
		target_link_libraries(miniMD PUBLIC ${AMDHIP64_LIB})
	endif()
	# Link Cray MPICH GTL HSA transport if available (provides AMD GPU support)
	find_library(MPI_GTL_HSA mpi_gtl_hsa HINTS /opt/cray/pe/mpich/8.1.31/gtl/lib /opt/cray/pe/lib64)
	if(MPI_GTL_HSA)
		message(STATUS "Linking MPI GTL HSA: ${MPI_GTL_HSA}")
		target_link_libraries(miniMD PRIVATE ${MPI_GTL_HSA})
	endif()
endif()

# Default to -O3 -g as seen in Makefile
target_compile_options(miniMD PRIVATE -O3 -g)
