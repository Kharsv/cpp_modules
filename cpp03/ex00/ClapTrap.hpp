#ifndef MODULE_03_CLAPTRAP_HPP
#define MODULE_03_CLAPTRAP_HPP


#include <string>

class ClapTrap {

public:
    explicit ClapTrap(const std::string &name);
    virtual ~ClapTrap();

public:
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int getDamage() const;

private:
    std::string name;
    unsigned int hp;
    unsigned int stamina;
    unsigned int damage;

};


#endif //MODULE_03_CLAPTRAP_HPP
