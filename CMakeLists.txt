cmake_minimum_required(VERSION 3.10)
project(FLTKExample)

find_package(FLTK REQUIRED)

add_executable(FLTKExample main.cpp)

target_link_libraries(FLTKExample fltk fltk_images fltk_forms fltk_gl)
