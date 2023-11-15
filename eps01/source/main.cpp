#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

template <typename T>
requires std::integral<T>
T multiply(T a, T b){
    return a * b;
}

int main() {
    std::cout << "Hello from c++ 20 CMake on Linux/Windows "<< std::endl;
    std::cout << "The sum is : "<< add(7, 405) << std::endl;
    std::cout << "multiplication is : "<< multiply(7, 405) << std::endl;


    return 0;
}