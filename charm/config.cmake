set(KOKKOS_DIR "/u/ajain18/belobench/LibCharmtyles/kokkos/install")
set(CHARM_DIR "/u/ajain18/oldCharm/netlrts-linux-x86_64-smp-cuda")
set(CHARMC "${CHARM_DIR}/bin/charmc")
set(CUDA_DIR "/opt/nvidia/hpc_sdk/Linux_x86_64/25.3/cuda/12.8")
set(BASE_DIR "/u/ajain18/miniMD/charm")

set(Charm_ENABLE_GPU ON)

set(GPU_OPTS "-O3 -std=c++20 -extended-lambda -Wext-lambda-captures-this")
set(GPU_LINK_OPTS "-O3 -std=c++20 -lcudart -lcuda -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd")
