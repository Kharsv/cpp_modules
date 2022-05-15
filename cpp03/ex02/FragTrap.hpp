#ifndef MODULE_03_FRAGTRAP_HPP
#define MODULE_03_FRAGTRAP_HPP


#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    explicit FragTrap(const std::string &name);

    virtual ~FragTrap();

public:
    void highFivesGuys();

};

#endif 