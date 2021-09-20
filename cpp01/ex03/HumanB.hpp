#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _nameHumanB;
        Weapon      *_weaponPTR;

    public:
        void    attack ( void );
        void    setWeapon ( const Weapon &newWeaponPTR );
        HumanB ( std::string newNameHumanB );
};


#endif