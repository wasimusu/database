#!/usr/bin/env bash

#git submodule init
#git submodule update

cd test
git clone https://github.com/google/googletest.git
cd ..

cd benchmark
git clone https://github.com/google/benchmark.git
cd ..

mkdir build
cd build
cmake ..
make -j8

./test/tests
./src/cpp_project