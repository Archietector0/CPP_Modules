#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
    private:
        std::string _typeWeapon;
    
    public:

        const std::string&  getType ( void ) const;
        void                setType ( const std::string &newType );
        
        Weapon ( std::string newTypeWeapon );
};

#endif