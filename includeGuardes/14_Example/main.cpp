#include <iostream>

#ifndef SUM_HPP
    #include "Sum.hpp"
#endif
#ifndef SUBTRACT_HPP
    #include "Subtract.hpp"
#endif

int main() {
    int a = 3, b = 2;
    std::cout << Add(a, b) << ' ' << Minus(a, b);

    return EXIT_SUCCESS;
}