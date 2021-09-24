#include "FragTrap.hpp"

FragTrap::FragTrap () {
    _name = "None";
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor was called!" << std::endl;
    playerInfo();
}

FragTrap::FragTrap ( std::string name ) {
    _name = name;
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap DOP constructor was called!" << std::endl;
    playerInfo();
}

FragTrap::~FragTrap () {
    std::cout << "FragTrap default destructor was called!" << std::endl;
}

FragTrap::FragTrap ( const FragTrap &other ) {
    std::cout << "ClapTrap COPY constructor was called!" << std::endl;
    operator = (other);
}

FragTrap &FragTrap::operator = ( const FragTrap &other ) {
    std::cout << "ClapTrap assignation operator was called!" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    playerInfo();
    return *this;
}


void            FragTrap::takeDamage ( unsigned int amount ) {
    // std::cout << this->_name << " take " << amount << " points of damage." << std::endl;
    if (amount > 50000) {
        std::cout << "Invalid value for damage. Please check!" << std::endl;
        return;
    } else if (amount > this->_hitpoints) {
        this->_hitpoints = 0;
        std::cout << this->_name << " take " << amount << " points of damage." << std::endl;

        std::cout << this->_name << " is dead, you are fuc**ng murder!" << std::endl;
    } else if (amount <= this->_hitpoints && amount >= 0) {
        this->_hitpoints -= amount;
        std::cout << this->_name << " take " << amount << " points of damage." << std::endl;

        std::cout << this->_name << " say: OUCH WTF !?!?!" << std::endl;
    }
    playerInfo();
}


void            FragTrap::attack ( std::string const & target ) {
    std::cout << "FragTrap " << this->_name
              << " attack " << target << ", causing "
              << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
}

void            FragTrap::beRepaired ( unsigned int amount ) {
    std::cout << this->_name << " repaired " << amount << " points of HP." << std::endl;
    if (amount >= 50000)
        return;
    this->_hitpoints += amount;
    playerInfo();

}

void            FragTrap::highFivesGuys ( void ) {
    std::cout << _name << " say: Give highfive Dooooooooode!" << std::endl;
}
