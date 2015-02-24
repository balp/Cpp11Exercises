
cmake_minimum_required(VERSION 3.1)

project(cpp CXX)

# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)


#message("Your C++ compiler supports these C++ features:")
#get_property(known_features GLOBAL PROPERTY CMAKE_CXX_KNOWN_FEATURES)
#foreach(i ${known_features})
#  message("${i}")
#endforeach()

enable_testing()

add_executable( exercises
    Exercises.cpp
    MyBox.cpp
    MyBox.h
)

set_property(TARGET exercises PROPERTY CXX_STANDARD 11)
target_compile_features(exercises PRIVATE cxx_rvalue_references)

add_test( NAME exercises COMMAND $<TARGET_FILE:exercises> )
