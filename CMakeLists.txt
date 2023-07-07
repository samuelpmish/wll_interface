cmake_minimum_required(VERSION 3.16)
project(wll LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

file(GLOB headers ${PROJECT_SOURCE_DIR}/cpp/*.hpp)
add_library(wll_interface INTERFACE ${headers})
target_include_directories(wll_interface INTERFACE ${PROJECT_SOURCE_DIR}/include)