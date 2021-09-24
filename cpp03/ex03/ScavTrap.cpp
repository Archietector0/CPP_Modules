#include "ScavTrap.hpp"

ScavTrap::ScavTrap () {
    _name = "None";
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor was called!" << std::endl;
    playerInfo();
}

ScavTrap::ScavTrap ( std::string name ) {
    _name = name;
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap DOP constructor was called!" << std::endl;
    playerInfo();
}

ScavTrap::~ScavTrap () {
    std::cout << "ScavTrap default destructor was called!" << std::endl;
}


ScavTrap::ScavTrap ( const ScavTrap &other ) {
    std::cout << "ScavTrap COPY constructor was called!" << std::endl;
    operator = (other);
}

ScavTrap &ScavTrap::operator = ( const ScavTrap &other ) {
    std::cout << "ClapTrap assignation operator was called!" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    playerInfo();
    return *this;
}

void            ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keepper mode." << std::endl;
}

void            ScavTrap::attack ( std::string const & target ) {
    std::cout << "ScavTrap " << this->_name
              << " attack " << target << ", causing "
              << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
}

void            ScavTrap::takeDamage ( unsigned int amount ) {
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

void            ScavTrap::beRepaired ( unsigned int amount ) {
    std::cout << this->_name << " repaired " << amount << " points of HP." << std::endl;
    if (amount >= 50000)
        return;
    this->_hitpoints += amount;
    playerInfo();
}
