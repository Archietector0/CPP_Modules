#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        ~FragTrap();
        FragTrap( std::string name );
        FragTrap ( const FragTrap &other );

        FragTrap &operator = ( const FragTrap &other );

        void            attack ( std::string const & target );
        void            takeDamage ( unsigned int amount );
        void            beRepaired ( unsigned int amount );

        void            highFivesGuys( void );
};

#endif

