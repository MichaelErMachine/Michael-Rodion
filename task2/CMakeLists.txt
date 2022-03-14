cmake_minimum_required(VERSION 3.10)
project(task2)


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/C")
set(GEN_DIR "${PROJECT_SOURCE_DIR}/A")
set(LIB_DIR "${PROJECT_SOURCE_DIR}/B")



add_subdirectory(B)

add_subdirectory(A)

add_subdirectory(C)


