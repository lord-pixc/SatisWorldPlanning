cmake_minimum_required(VERSION 3.10)
project(SatisWorldPlanning)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_library(${PROJECT_NAME} ${SOURCES})

target_include_directories(${SatisWorldPlanning} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_subdirectory(test)
