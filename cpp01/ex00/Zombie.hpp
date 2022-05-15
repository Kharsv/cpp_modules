#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	virtual ~Zombie();
	int announce(void);

private:
	std::string name;
};

Zombie *newZombie(std::string name);

void randomChump(std::string name);

#endif //MODULE01_ZOMBIE_H
