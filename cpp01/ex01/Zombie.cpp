#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name){
}

Zombie::~Zombie() {
	std::cout << "delete" << std::endl;
}

void Zombie::newZombie(std::string &newName) {
	Zombie::name = newName;
}

void Zombie::announce(void) {
	std::cout << name << std::endl;
}