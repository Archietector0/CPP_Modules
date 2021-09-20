#include "Zombie.hpp"

int main () {
	Zombie		*zombHorde = NULL;
	int			N;
	int			i = 0;
	std::string	name;

	std::cout << "Please, enter the number of Zomb Horde: " << std::endl;
	std::cin >> N;

	std::cin.ignore( 10000, '\n' );

	std::cout << "Please, enter the Name of Zomb Horde: " << std::endl;
	std::getline( std::cin, name );

	zombHorde = zombHorde->zombieHorde( N, name );

	while ( i < N ) {
		std::cout << i + 1 << ") ";
		zombHorde[i++].announce();
	}

	delete[] zombHorde;
}
