#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    private:

    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap &other );

        ScavTrap        &operator = ( const ScavTrap &other );


        void            attack ( std::string const & target );
        void            takeDamage ( unsigned int amount );
        void            beRepaired ( unsigned int amount );

        void            guardGate();

};

#endif

// ame (Parameter of constructor)
// •Hitpoints (100)
// •Energy points (50)
// •attack damage (20)