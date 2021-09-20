#include "Zombie.hpp"

Zombie*	Zombie::newZombie ( std::string name ) {
	Zombie *newStackZomb = new Zombie;
	newStackZomb->_nameZombie = name;
	return (newStackZomb);
}

void	Zombie::randomChump( std::string name ) {
	this->_nameZombie = name;
}

Zombie::Zombie () {}

Zombie::~Zombie () {
	std::cout << _nameZombie << " want to live, but die." << std::endl;
}

void	Zombie::announce ( void ) {
	std::cout << this->_nameZombie << " BraiiiiiiinnnzzzZ..." << std::endl;
}
