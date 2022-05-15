#ifndef MODULE01_HUMANB_HPP
#define MODULE01_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
public:
	explicit HumanB(const std::string &name);
	void setWeapon(Weapon &newWeapon);
	void attack();
private:
	std::string name;
	Weapon *weapon;
};

#endif //MODULE01_HUMANB_HPP
