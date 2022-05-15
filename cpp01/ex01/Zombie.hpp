#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:

	explicit Zombie(const std::string &name = "BraiiiiiiinnnzzzZ");

	virtual ~Zombie();

	void announce();

	void newZombie(std::string &name);

private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string &name);

#endif //ZOMBIE_HPP