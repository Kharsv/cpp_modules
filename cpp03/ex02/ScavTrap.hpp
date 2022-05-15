#ifndef MODULE_03_SCAVTRAP_HPP
#define MODULE_03_SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    explicit ScavTrap(const std::string &name);
    virtual ~ScavTrap();

public:
    virtual void attack(const std::string &target);
    void guardGate();
};


#endif //MODULE_03_SCAVTRAP_HPP
