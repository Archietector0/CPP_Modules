#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string _nameHumanA;
        Weapon      &_weaponREF;

    public:
        void attack ( void );

        HumanA ( std::string newNameHumanA, Weapon &newWeaponREF );
};


#endif