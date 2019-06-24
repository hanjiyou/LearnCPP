# cmake_minimum_required(VERSION <specify CMake version here>)
project(FirstProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCPP Learn/Chapter4/ArrayTest.cpp Learn/Chapter4/StructTest.cpp Learn/Chapter4/PointTest.cpp Learn/Chapter4/ConstPointTest.cpp Learn/Chapter5/ForDemo1.cpp Learn/Chapter5/WhileDemo1.cpp Learn/Chapter5/ForDemo2.cpp Learn/Chapter5/WhileDemoCinEof.cpp)