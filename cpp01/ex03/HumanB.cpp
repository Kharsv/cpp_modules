#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	HumanB::weapon = &newWeapon;
}

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {

}
