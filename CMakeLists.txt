cmake_minimum_required(VERSION 3.13)
project(MultiplyTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE Release)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
