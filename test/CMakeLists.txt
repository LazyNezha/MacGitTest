cmake_minimum_required(VERSION 3.16)
project(test1 C)

set(CMAKE_C_STANDARD 99)

add_executable(test1 main.c game.c game.h)
