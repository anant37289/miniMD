rm -rf build2
mkdir build2
cd build2 
cmake .. -DCharm_ENABLE_GPU=ON
make -j16
