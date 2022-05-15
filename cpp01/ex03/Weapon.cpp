
#include "Weapon.hpp"
Weapon::Weapon(std::string type) : type(type) {}

void Weapon::setType(std::string newType) {
	Weapon::type = newType;
}

std::string &Weapon::getType() {
	return type;
}
