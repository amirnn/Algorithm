project(Algorithms)
cmake_minimum_required(VERSION 3.10) # optimistic
set(CMAKE_CXX_STANDARD 20)

# see https://cmake.org/cmake/help/latest/module/FindBoost.html
find_package(Boost 1.74.0 PATHS "C:/Library/Boost/lib/cmake/Boost-1.74.0" REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_RELEASE_LIBS ON)
#find_package(Boost REQUIRED PATHS "C:/Library/Boost/lib/cmake/Boost-1.74.0" COMPONENTS unit_test_framework)
include_directories(include)
add_executable(run src/main.cpp)