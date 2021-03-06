#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string     _name;
        unsigned int    _hitpoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        ClapTrap        ();
        ~ClapTrap       ();
        ClapTrap        ( const std::string& name );
        ClapTrap        ( const ClapTrap &other );


        ClapTrap        &operator = ( const ClapTrap &other );


        void            attack ( std::string const & target );
        void            takeDamage ( unsigned int amount );
        void            beRepaired ( unsigned int amount );


        void            playerInfo ();
};



#endif
