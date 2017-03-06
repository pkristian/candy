cmake_minimum_required(VERSION 3.6)
project(Candy)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(SOURCE_FILES main.cpp src/Profile.cpp src/Profile.h src/ProfileFromArguments.cpp src/ProfileFromArguments.h)
add_executable(Candy ${SOURCE_FILES})