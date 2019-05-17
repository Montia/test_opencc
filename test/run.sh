#!/usr/bin/sh
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:../build64_release/opencc
cp ../build64_release/test/test_opencc .
./test_opencc
