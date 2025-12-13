rm -rf build
cd build 
cmake .. -DCharm_ENABLE_GPU=ON
make -j16
