cmake_minimum_required(VERSION 3.10)
project(my_project)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exec/${CMAKE_BUILD_TYPE})

add_subdirectory(src/mylib)
add_subdirectory(src/app)

enable_testing()
add_subdirectory(tests)
