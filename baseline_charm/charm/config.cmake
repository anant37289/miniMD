set(KOKKOS_DIR "/u/ajain18/hapi_hip/shogo/charm/kokkos/install")
set(CHARM_DIR "/u/ajain18/reconverse_charm_integration/charm/multicore-linux-x86_64-cuda")
#set(CHARM_DIR "/u/ajain18/oldCharm/mpi-linux-x86_64-smp-cuda")
set(CHARMC "${CHARM_DIR}/bin/charmc")
set(CUDA_DIR "/opt/nvidia/hpc_sdk/Linux_x86_64/25.3/cuda/12.8")
set(BASE_DIR "/u/ajain18/miniMD/baseline_charm/charm")

set(Charm_ENABLE_GPU ON)

#set(GPU_OPTS "-O3 -std=c++20 -extended-lambda -Wext-lambda-captures-this -Xcompiler -fsanitize=address -Xcompiler -fno-omit-frame-pointer")
#set(GPU_LINK_OPTS "-O3 -std=c++20 -lcudart -lcuda -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd -fsanitize=address")
set(GPU_OPTS "-O3 -std=c++20 -extended-lambda -Wext-lambda-captures-this")
set(GPU_LINK_OPTS "-O3 -std=c++20 -lcudart -lcuda -L${KOKKOS_DIR}/lib64 -lkokkoscore -lkokkoscontainers -lkokkosalgorithms -lkokkossimd")
