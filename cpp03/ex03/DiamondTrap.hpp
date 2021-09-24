#ifndef DIAMODTRAP_HPP
#define DIAMODTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string     _name;
        unsigned int    _hitpoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        DiamondTrap      ();
        DiamondTrap      ( std::string name );
        ~DiamondTrap     ();
        DiamondTrap      ( const DiamondTrap &other );

        DiamondTrap      &operator = ( const DiamondTrap &other );
        void             attack ( std::string const & target );
        void            takeDamage ( unsigned int amount );
        void            beRepaired ( unsigned int amount );

		void        	playerInfo ();
        void            whoAmI ();

};

#endif

