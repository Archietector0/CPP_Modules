#include "Zombie.hpp"

Zombie::Zombie () {}

Zombie::~Zombie () {
	std::cout << _nameZombie << " want to live, but die." << std::endl;
}

void	Zombie::announce ( void ) {
	std::cout << this->_nameZombie << " BraiiiiiiinnnzzzZ..." << std::endl;
}
