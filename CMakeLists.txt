cmake_minimum_required(VERSION 3.3)
project(iz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp IntegrationUtils.cpp Fabrics.cpp SimpsonIntegrator.cpp TrapezeIntegrator.cpp)
add_executable(iz ${SOURCE_FILES})