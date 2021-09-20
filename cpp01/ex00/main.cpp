#include "Zombie.hpp"

int main() {

	Zombie	zomb;
	Zombie	*lol;

	lol = zomb.newZombie("Marry");
	lol->announce();
	delete lol;

	zomb.randomChump("Garry");
	zomb.announce();
}
