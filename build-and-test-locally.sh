#!/bin/bash
set -e  # stop on error

# Build and run the app in Release mode
cmake -S . -B build/release -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build build/release
./exec/Release/my_app

# Build and run tests in Debug mode
cmake -S . -B build/debug -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake --build build/debug

cd build/debug
ctest --output-on-failure
