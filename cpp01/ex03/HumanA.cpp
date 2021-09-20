#include "HumanA.hpp"

void HumanA::attack ( void ) {
    std::cout << this->_nameHumanA << " attacks with his " << this->_weaponREF.getType() << std::endl;
}

HumanA::HumanA ( std::string newNameHumanA, Weapon &newWeaponREF ) : _nameHumanA(newNameHumanA), _weaponREF(newWeaponREF) {}
