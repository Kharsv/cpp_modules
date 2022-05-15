#include <iostream>
#include <typeinfo>
#include "ScavTrap.hpp"

int main() {
    ClapTrap clapTrap("True_ClapTrap");
    ScavTrap scavTrap("True_ScavTrap");
    ClapTrap *up = (ClapTrap *) &scavTrap;
    ScavTrap *down = (ScavTrap *) &clapTrap;
    scavTrap.guardGate();
    std::cout << "--------------------" << std::endl;
    std::cout << typeid(clapTrap).name() << " - Default ClapTrap" << std::endl;
    std::cout << typeid(scavTrap).name() << " - Default ScavTrap" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Test Upcasting:" << std::endl;
    std::cout << typeid(up).name() << " - Default up of ScavTrap" << std::endl;
    std::cout << typeid(*up).name() << " - Upcasting ScavTrap" << std::endl;
    up->attack("Upcasting ScavTrap");
    std::cout << "--------------------" << std::endl;
    std::cout << "Test Downcasting:" << std::endl;
    std::cout << typeid(down).name() << " - Default down of ClapTrap" << std::endl;
    std::cout << typeid(*down).name() << " - Downcasting ClapTrap" << std::endl;
    down->guardGate();
    down->attack("Downcasting ClapTrap");
    std::cout << "--------------------" << std::endl;


    return 0;
}
