#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Bad args" << std::endl;
        return 0;
    }

    std::cout << "char: " << Converter::to_char(argv[1]) << std::endl;
    std::cout << "int: " << Converter::to_int(argv[1]) << std::endl;
    std::cout << "float: " << Converter::to_float(argv[1]) << std::endl;
    std::cout << "double: " << Converter::to_double(argv[1]) << std::endl;

    return 0;
}
