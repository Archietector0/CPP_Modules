#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () {
    std::cout << "DiamondTrap default constructor was called!" << std::endl;
}


DiamondTrap::DiamondTrap ( std::string name ) {
    std::cout << "DiamondTrap DOP constructor was called!" << std::endl;

    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    _hitpoints = FragTrap::_hitpoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    playerInfo();
}

void        DiamondTrap::playerInfo () {
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "HitPoints: " << _hitpoints << std::endl;
    std::cout << "EnergyPoints: " << _energyPoints << std::endl;
    std::cout << "AttackDamage: " << _attackDamage << std::endl;

    std::cout << "-------------------------------------" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap &other ) {
    std::cout << "DiamondTrap COPY constructor was called!" << std::endl;
	operator= (other);
}

DiamondTrap::~DiamondTrap () {
    std::cout << "DiamondTrap default destructor was called!" << std::endl;
}

DiamondTrap      &DiamondTrap::operator = ( const DiamondTrap &other ) {
    this->_name = other._name;
    ClapTrap::_name = other._name + "_clap_name";
    this->_hitpoints = other.FragTrap::_hitpoints;
	this->_energyPoints = other.ScavTrap::_energyPoints;
    this->_attackDamage = other.FragTrap::_attackDamage;
	return *this;
}

void DiamondTrap::attack( std::string const & target ) {
    ScavTrap::attack(target);
}

void            DiamondTrap::whoAmI () {
	std::cout << "Name DiamondTrap: " << this->_name << "\n" << "Name ClapTrap: " << ClapTrap::_name << std::endl;
}

void            DiamondTrap::takeDamage ( unsigned int amount ) {
	   (void)amount;
}

void            DiamondTrap::beRepaired ( unsigned int amount ) {
	   (void)amount;
}
