cmake_minimum_required(VERSION 3.5)

project(Nregex)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -Wall")

file(GLOB
  CPP_SOURCES "src/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/src/private")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})
