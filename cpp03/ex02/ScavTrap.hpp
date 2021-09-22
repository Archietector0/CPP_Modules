#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:

	public:
		ScavTrap	();
		ScavTrap	( std::string newName );
		~ScavTrap	();
		ScavTrap	( const ScavTrap &other );

		ScavTrap	&operator = (const ScavTrap &other);
		void		guardGate();
};


#endif
