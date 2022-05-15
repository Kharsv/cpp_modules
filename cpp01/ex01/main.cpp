#include <iostream>
#include "Zombie.hpp"

int main() {
	std::cout << "Creating Zombie" << std::endl;
	std::string name = "BraiiiiiiinnnzzzZ";
	Zombie *zombie = zombieHorde(10, name);
	for (int i = 0; i < 10; i++)
		zombie->announce();
	std::cout << "Delete Zombie" << std::endl;
	delete[] zombie;

	return 0;
}