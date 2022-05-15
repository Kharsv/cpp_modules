#include <iostream>
#include <typeinfo>
#include "FragTrap.hpp"

int main() {
    ClapTrap clapTrap("True_ClapTrap");
    FragTrap fragTrap("True_FragTrap");

    ClapTrap *up = (ClapTrap *) &fragTrap;
    FragTrap *down = (FragTrap *) &clapTrap;

    fragTrap.highFivesGuys();

    std::cout << "--------------------" << std::endl;
    std::cout << typeid(clapTrap).name() << " - Default ClapTrap" << std::endl;
    std::cout << typeid(fragTrap).name() << " - Default FragTrap" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Test Upcasting:" << std::endl;
    std::cout << typeid(up).name() << " - Default up of FragTrap" << std::endl;
    std::cout << typeid(*up).name() << " - Upcasting FragTrap" << std::endl;
    up->attack("Upcasting FragTrap");
    std::cout << "--------------------" << std::endl;
    std::cout << "Test Downcasting:" << std::endl;
    std::cout << typeid(down).name() << " - Default down of ClapTrap" << std::endl;
    std::cout << typeid(*down).name() << " - Downcasting ClapTrap" << std::endl;
    down->highFivesGuys();
    down->attack("Downcasting ClapTrap");
    std::cout << "--------------------" << std::endl;


    return 0;
}
