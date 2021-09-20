#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _nameZombie;

	public:
		Zombie  ();
		~Zombie ();

		void	announce ( void );
		Zombie*	newZombie ( std::string name );
		void	randomChump( std::string name );

		// std::string _nameZombie = "None";
};

#endif
