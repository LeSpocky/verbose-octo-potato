cmake_minimum_required(VERSION 2.8)
project("verbose-octo-potato" C)

find_library(MOSQUITTO_LIBRARY
    mosquitto
)
if(MOSQUITTO_LIBRARY)
    message(STATUS "MOSQUITTO_LIBRARY: ${MOSQUITTO_LIBRARY}")
else(MOSQUITTO_LIBRARY)
    message(FATAL_ERROR "Could not find mosquitto library!")
endif(MOSQUITTO_LIBRARY)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -pedantic -ansi")
message(STATUS "CMAKE_C_FLAGS: ${CMAKE_C_FLAGS}")

add_subdirectory("src")
