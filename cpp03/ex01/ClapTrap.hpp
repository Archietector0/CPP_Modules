#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

	// Con/De - structor
		ClapTrap		();
		ClapTrap		( std::string newName );
		~ClapTrap		();

	// Copy constructor
		ClapTrap		( const ClapTrap &other );

	// setter - methods
		void			setName ( std::string newName );
		void			setHitpoints ( unsigned int newHitpoints);
		void			setEnergyPoints ( unsigned int newEnergyPoints );
		void			setAttackDamage ( unsigned int newAttackDamage );

	// getter - methods
		std::string		getName ();
		unsigned int	getHitpoints ();
		unsigned int	getEnergyPoints ();
		unsigned int	getAttackDamage ();

	// life-like - functions
		void			attack ( std::string const &target );
		void			takeDamage ( unsigned int amount );
		void			beRepaired ( unsigned int amount );
};

void ft_info ( ClapTrap &other );


#endif
