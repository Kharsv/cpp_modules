#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
	std::cout << "delete" << std::endl;
}

int Zombie::announce(void) {
	std::cout << name << std::endl;
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
	return 0;
}

