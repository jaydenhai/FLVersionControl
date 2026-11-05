cmake_minimum_required(VERSION 4.3)
project(FLVersionControl)

set(CMAKE_CXX_STANDARD 20)

add_executable(FLVersionControl src/main.cpp
        src/Repository.cpp
        src/Repository.h
        src/Commit.cpp
        src/Commit.h)
