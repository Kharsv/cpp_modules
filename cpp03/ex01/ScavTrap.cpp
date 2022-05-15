#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    setHp(100);
    setStamina(50);
    setDamage(20);
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destroy" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " have entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getDamage() << " damage!" << std::endl;
}
