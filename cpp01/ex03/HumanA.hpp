#ifndef MODULE01_HUMANA_HPP
#define MODULE01_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon weapon);
	void attack();
private:
	std::string name;
	Weapon weapon;
};

#endif //MODULE01_HUMANA_HPP
