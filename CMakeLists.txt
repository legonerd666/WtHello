cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(hello)

find_package(wthttp)
find_package(wt)

file(GLOB project_SRCS src/*.cpp)

add_executable(hello ${project_SRCS})  

TARGET_INCLUDE_DIRECTORIES(hello PRIVATE include/)

TARGET_LINK_LIBRARIES(hello wthttp wt)