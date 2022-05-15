#ifndef MODULE_03_CLAPTRAP_HPP
#define MODULE_03_CLAPTRAP_HPP


#include <string>

class ClapTrap {

public:
    explicit ClapTrap(const std::string &name);
    virtual ~ClapTrap();
public:
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string &getName() const;
    void setName(const std::string &newName);
    unsigned int getHp() const;
    void setHp(unsigned int newHP);
    unsigned int getStamina() const;
    void setStamina(unsigned int newStamina);
    unsigned int getDamage() const;
    void setDamage(unsigned int newDamage);

private:
    std::string name;
    unsigned int hp;
    unsigned int stamina;
    unsigned int damage;

};

#endif
