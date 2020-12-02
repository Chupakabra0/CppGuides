#include <iostream>

#include "Sum.hpp"
#include "Subtract.hpp"

int main() {
    int a = 3, b = 2;
    std::cout << Add(a, b) << ' ' << Minus(a, b);

    return EXIT_SUCCESS;
}