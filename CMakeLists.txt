cmake_minimum_required(VERSION 3.16)
project(si446x C)


set(CMAKE_C_STANDARD 11)

FILE(GLOB SRC_FILES Si446x/*.c)
add_library (si446x SHARED ${SRC_FILES})
