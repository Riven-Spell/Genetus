cmake_minimum_required(VERSION 3.12)
project(genetus)

set(CMAKE_CXX_STANDARD 14)

add_library(genetus SHARED includes/Genetus.h includes/Populant.h src/Population.cpp includes/Population.h src/Rule.cpp includes/Rule.h)