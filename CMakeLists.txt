cmake_minimum_required(VERSION 4.0)
project(Chess)

set(CMAKE_CXX_STANDARD 20)

add_executable(Chess main.cpp
        Piece.cpp
        Piece.h
        Board.cpp
        Board.h
        Location.h)
