#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string &name) {
	int i = 0;
	Zombie  *zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].newZombie(name);
		i++;
	}
	return (zombies);
}