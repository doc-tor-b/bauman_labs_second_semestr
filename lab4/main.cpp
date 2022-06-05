//
// Created by doctor on 05.06.22.
//
#include "Stack.h"

int main() {
    std::cout << "First test" << std::endl;
    test_function<int>(1, 2, 3, 4);
    std::cout << "Second test" << std::endl;
    test_function<char>(65, 66, 67, 68);
    std::cout << "Third test" << std::endl;
    test_function<double>(77.1, 22.4, 234.6, 115.5);
    return 0;
}