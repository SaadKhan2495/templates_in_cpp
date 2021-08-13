cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(templates_in_cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})

add_subdirectory(src)