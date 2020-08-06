#!/usr/bin/env bash

git submodule init
git submodule upadte

mkdir build
cd build
cmake ..
make

./test/tests
./src/graphs