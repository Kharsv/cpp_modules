#include <iostream>
#include "ClapTrap.hpp"

int main() {
	std::string name1 = "A1";
	std::string name2 = "B2";
	ClapTrap clapTrap1(name1);
	ClapTrap clapTrap2(name2);
	clapTrap1.attack(name2);
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(10);
	clapTrap2.attack(name1);
	clapTrap1.takeDamage(clapTrap2.getDamage());
	return 0;
}
