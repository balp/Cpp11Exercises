#!/bin/bash
#

CMAKE=cmake
if [[ -x /Applications/CMake.app/Contents/bin/cmake ]] ; then
    CMAKE=/Applications/CMake.app/Contents/bin/cmake
fi

if [[ ! -d build_clang ]] ; then
    mkdir build_clang
fi
(cd build_clang ; $CMAKE .. && make all  && make ARGS="-V" test)
