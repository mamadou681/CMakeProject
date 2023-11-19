cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading hello World App"
        LANGUAGES CXX)
# target 
# add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp) 
#  second way of adding cpp files using GLOBING
file(GLOB_RECURSE SOURCE_F src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCE_F}) 

target_compile_features(HelloAppBinary PRIVATE cxx_std_20)

target_include_directories(HelloAppBinary PRIVATE  ${CMAKE_CURRENT_SOURCE_DIR}/include)