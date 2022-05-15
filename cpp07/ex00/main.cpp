#include <iostream>
#include "whatever.hpp"

int main() {
    float a = 2;
    float b = 3;

    whatever::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << whatever::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << whatever::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    whatever::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << whatever::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << whatever::max(c, d) << std::endl;

    return 0;
}
