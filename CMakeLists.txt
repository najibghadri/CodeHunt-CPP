cmake_minimum_required(VERSION 3.8)
project(CodeHunt)

set(CMAKE_CXX_STANDARD 14)


set(SOURCE_FILES
        levels/levels.cpp
        levels/levels.hpp
        codehunt.cpp
        codeloader.hpp
        stringlevel.hpp
        generic_level.hpp
        level.hpp
        constants.h)

add_executable(CodeHunt ${SOURCE_FILES})

target_link_libraries(CodeHunt ${CMAKE_DL_LIBS})