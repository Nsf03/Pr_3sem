cmake_minimum_required(VERSION 3.20)
project(project_27_11_2021)

set(CMAKE_CXX_STANDARD 14)

add_executable(project_27_11_2021   main.cpp Config_Import.h Grid.h Cell.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(project_27_11_2021 sfml-system sfml-window sfml-graphics sfml-audio)