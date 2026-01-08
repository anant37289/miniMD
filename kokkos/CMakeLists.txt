cmake_minimum_required(VERSION 3.16)
project(miniMD CXX)

# Set the path to Kokkos
set(Kokkos_ROOT "/u/ajain18/hapi_hip/shogo/charm/kokkos/install")
find_package(Kokkos REQUIRED)

find_package(MPI REQUIRED)

file(GLOB SRC "*.cpp")

add_executable(miniMD ${SRC})

target_link_libraries(miniMD PUBLIC Kokkos::kokkos MPI::MPI_CXX)

# Default to -O3 -g as seen in Makefile
target_compile_options(miniMD PRIVATE -O3 -g)
