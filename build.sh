#!/bin/bash

mkdir -p ./build
cd ./build

echo "cmake "
cmake .. > ../build_cmake.log 2>&1

if [ $? -ne 0 ]
then
    echo "fail: see build_cmake.log for more details"
    exit 1
fi

echo "make "
make -j 4 2>&1 |tee ../build_make.log | grep -v "ld: warning: direct access"
