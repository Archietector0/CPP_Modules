#include "HumanB.hpp"


void HumanB::attack ( void ) {
    std::cout << this->_nameHumanB << " attacks with his " << _weaponPTR->getType() << std::endl;
}

HumanB::HumanB ( std::string newNameHumanB ) : _nameHumanB (newNameHumanB) {}

void    HumanB::setWeapon ( const Weapon &newWeaponPTR ) {
    _weaponPTR = (Weapon *)&newWeaponPTR;
}
