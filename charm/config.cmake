set(KOKKOS_DIR "/u/ajain18/belobench/LibCharmtyles/kokkos_cuda12.6/install")
set(CHARM_DIR "/u/ajain18/charm/netlrts-linux-x86_64-cuda")
set(CHARMC "${CHARM_DIR}/bin/charmc")
set(CUDA_DIR "/sw/external/cudatoolkits/cuda-12.6.3/")
set(BASE_DIR "/u/ajain18/miniMD/charm")

set(Charm_ENABLE_GPU ON)

set(GPU_OPTS "-O3 -std=c++20 -extended-lambda -Wext-lambda-captures-this -arch=sm_80")
set(GPU_LINK_OPTS "-O3 -std=c++20 -lcudart -lcuda -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd")
