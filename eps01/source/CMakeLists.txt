cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading hello World App"
        LANGUAGES CXX)
add_executable(HellowAppBinary main.cpp)
target_compile_features(HellowAppBinary PRIVATE cxx_std_20)