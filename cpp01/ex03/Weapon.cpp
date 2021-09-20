#include "Weapon.hpp"

const std::string&  Weapon::getType ( void ) const {
    return _typeWeapon;
}

void                Weapon::setType ( const std::string &newType ) {
    this->_typeWeapon = newType;
}

Weapon::Weapon ( std::string newTypeWeapon ) : _typeWeapon(newTypeWeapon) {
    return;
}
