cmake_minimum_required(VERSION 3.28.1)

set(DRIVERS_LIBRARY Drivers)
add_library(${DRIVERS_LIBRARY} OBJECT)

add_subdirectory(${DRIVERS_DIRECTORY})
