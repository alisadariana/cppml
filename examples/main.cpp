/**
 * @file main.cpp
 * @brief Simple example to test the framework functionality
 */

#include <iostream>
#include "core.h"

int main() {
    std::cout << "C++ Deep Learning Framework version: " << cppml::version() << std::endl;
    std::cout << "CUDA support: " << (cppml::cuda_available() ? "available" : "not available") << std::endl;

    std::cout << "Example completed successfully!" << std::endl;

    return 0;
}
