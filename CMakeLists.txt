cmake_minimum_required(VERSION 3.5)
project(BYB)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp game.cpp game.h player.h card.h cardType.h deck.h deck.cpp card.cpp)
add_executable(BYB ${SOURCE_FILES})