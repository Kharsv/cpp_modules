#include <iostream>
#ifndef MODULE01_WEAPON_HPP
#define MODULE01_WEAPON_HPP

class Weapon {
public:
	Weapon(std::string type);
	std::string type;
	std::string &getType();
	void setType(std::string type);

private:
	std::string type;
};

#endif //MODULE01_WEAPON_HPP
