cmake_minimum_required(VERSION 3.7)
project(si446x C)


set(CMAKE_C_STANDARD 11)
add_definitions(-lbcm2835)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Si446x)

FILE(GLOB SRC_FILES Si446x/*.c)
add_library (si446x SHARED ${SRC_FILES})
