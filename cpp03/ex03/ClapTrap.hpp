#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
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


        virtual void            attack ( std::string const & target );
        virtual void            takeDamage ( unsigned int amount );
        virtual void            beRepaired ( unsigned int amount );


        void            		playerInfo ();
};



#endif
