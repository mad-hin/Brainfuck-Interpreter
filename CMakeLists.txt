cmake_minimum_required(VERSION 3.17)
project(bf_Interpreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(brainfuck src/main.cpp src/interpreter.cpp src/interpreter.h)