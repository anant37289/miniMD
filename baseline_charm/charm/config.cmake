set(KOKKOS_DIR "/ccs/home/rrao/kokkos")
set(CHARM_DIR "/ccs/home/rrao/charm_reconverse/multicore-linux-x86_64")
#set(CHARM_DIR "/u/ajain18/oldCharm/mpi-linux-x86_64-smp-cuda")
set(CHARMC "${CHARM_DIR}/bin/charmc")
#set(CUDA_DIR "/opt/nvidia/hpc_sdk/Linux_x86_64/25.3/cuda/12.8")
set(BASE_DIR "/ccs/home/rrao/miniMD/baseline_charm/charm")

set(Charm_ENABLE_GPU ON)

set(GPU_OPTS "-O3 -std=c++20")
set(GPU_LINK_OPTS "-O3 -std=c++20 -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd")
#set(GPU_OPTS "-O3 -extended-lambda -Wext-lambda-captures-this")
#set(GPU_LINK_OPTS "-O3 -lcudart -lcuda -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd")
