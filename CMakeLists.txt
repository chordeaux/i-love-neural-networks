cmake_minimum_required(VERSION 3.23)

project(i_love_neural_networks VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable( i-love-neural-networks
    src/layer.cpp
    src/main.cpp
    )

target_include_directories(i-love-neural-networks PRIVATE include)
