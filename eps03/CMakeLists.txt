cmake_minimum_required(VERSION 3.20)

Project(computing LANGUAGES CXX)

# the math library 
add_library(mathlib STATIC src/math/src/supermath.cpp)
target_include_directories(mathlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/math/include)

# The Stats library

add_library(statslib STATIC src/stats/src/stats.cpp)
target_include_directories(statslib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)

# linking
target_link_libraries(statslib PRIVATE mathlib)

# executable
add_executable(computing src/main.cpp)

target_link_libraries(computing PUBLIC statslib)