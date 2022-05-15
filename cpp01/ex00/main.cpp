#include "Zombie.hpp"

int main(void) {
	std::cout << "Creating Zombie" << std::endl;
	Zombie *zombie = newZombie("BraiiiiiiinnnzzzZ");
	zombie->announce();

	std::cout << "Delete Zombie" << std::endl;
	delete zombie;

	std::cout << "Creating Zombie" << std::endl;
	randomChump("BraiiiiiiinnnzzzZ...");
	return 0;
}