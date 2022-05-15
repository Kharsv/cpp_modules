#include "iostream"
#include "iter.hpp"

template <typename T>
void diplayElem(T &elem)
{
	std::cout << elem << " ";
}

int main() {
    // First string test
	int array_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float array_float[10] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};
    std::string str[5] = { "ABCDF", "QWERTY", "12345", "zxcvbnm", ")(*&" };

    // Int test
	iter(array_int, sizeof( array_int ) / sizeof( array_int[0] ), &diplayElem);
	std::cout << std::endl;
    // Float test
	iter(array_float, sizeof( array_float ) / sizeof( array_float[0] ), &diplayElem);
    std::cout << std::endl;
    // String test
	iter(str, sizeof( str ) / sizeof( str[0] ), &diplayElem);
    std::cout << std::endl;

    return 0;
}
