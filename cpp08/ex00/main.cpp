#include <iostream>
#include <vector>
#include "set"
#include "easyfind.hpp"

int main() {
	std::vector<int>			vect;
	std::vector<int>::iterator	it;

	try
	{
		for (int i = 1; i < 15; ++i)
			vect.push_back(i);

		for (int i = 1; i < 16; ++i)
		{
			it = easyfind(vect, i);
			std::cout << *it << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::set<int>			set;
	std::set<int>::iterator	it2;

	try
	{
		for (int i = 1; i < 15; ++i)
			set.insert(i);

		for (int i = 1; i < 16; ++i)
		{
			it = easyfind(vect, i);
			std::cout << *it << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}
