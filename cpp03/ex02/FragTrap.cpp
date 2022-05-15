#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    setHp(100);
    setStamina(100);
    setDamage(30);

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroy" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " positive high fives request" << std::endl;
}
