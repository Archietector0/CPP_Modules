#include "Zombie.hpp"

Zombie*	Zombie::newZombie ( std::string name ) {
	Zombie *newStackZomb = new Zombie;
	newStackZomb->_nameZombie = name;
	return (newStackZomb);
};
