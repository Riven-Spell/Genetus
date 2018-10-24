cmake_minimum_required(VERSION 3.12)
project(genetus)

set(CMAKE_CXX_STANDARD 14)

add_library(genetus SHARED library.cpp library.h)