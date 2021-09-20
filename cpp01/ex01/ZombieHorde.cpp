#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name ) {
	Zombie *arrZomb = new Zombie[N];
	// Zombie zombie;
	int i = -1;

	while (i < N)
		arrZomb[++i].randomChump(name);
	return arrZomb;
}
