#include <iostream>
#include "Array.hpp"


int main(void) 
{
	Array<int>			array_int(10);
	Array<int>			array_int_empty;
	Array<std::string>	array_string(20);
	Array<std::string>	array_string_empty;

	std::cout << "array_int.size() = " << array_int.size() << std::endl;
	std::cout << "array_int_empty.size() = " << array_int_empty.size() << std::endl;
	std::cout << "array_string.size() = " << array_string.size() << std::endl;
	std::cout << "array_string_empty.size() = " << array_string_empty.size() << std::endl;

	try
	{
		std::cout << array_int[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << array_string[30] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    //int *a = new int();
    //(void)a;
    // std::cout << a << std::endl;
    // std::cout << *a << std::endl;
    // std::cout << &a << std::endl;

    return 0;
}
