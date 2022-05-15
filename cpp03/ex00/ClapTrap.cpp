#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), stamina(10), damage(0) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroy" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (stamina != 0) {
        stamina--;
        std::cout << "ClapTrap " << name << " attack " << target << ", causing " << damage << " damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " trying to attack " << target << ", but not enough stamina" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hp >= amount)
        hp -= amount;
    else
        hp = 0;
    std::cout << "ClapTrap " << name << " take damage " << amount << ", new hp: " << hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    hp += amount;
    std::cout << "ClapTrap " << name << " repaired on " << amount << ", new hp: " << hp << std::endl;
}

unsigned int ClapTrap::getDamage() const {
    return damage;
}
