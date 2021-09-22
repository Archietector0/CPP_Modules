#include "ClapTrap.hpp"

ClapTrap::ClapTrap	() : _name("None"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default consturctor was called ! " << std::endl;
	ft_info(*this);
}

ClapTrap::ClapTrap	( std::string newName ) : _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Consturctor was called ! " << std::endl;
	_name = newName;
	ft_info(*this);
}

ClapTrap::~ClapTrap	() {
	std::cout << "Desturctor was called ! " << std::endl;
}

ClapTrap::ClapTrap	( const ClapTrap &other ) {
	std::cout << "Copy constructor was called ! " << std::endl;
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	ft_info(*this);
}

// setter - methods

void				ClapTrap::setName ( std::string newName ) {
	this->_name = newName;
}

void				ClapTrap::setHitpoints ( unsigned int newHitpoints ) {
	if ( newHitpoints >= 0 && newHitpoints <= 100 )
		this->_hitpoints = newHitpoints;
	else {
		std::cout << "ERROR: Invalid value of Hit Point, it must be  '0 <= HP <= 100'." << std::endl;
		exit (0);
	}
}

void				ClapTrap::setEnergyPoints ( unsigned int newEnergyPoints ) {
	if (newEnergyPoints < 0) {
		std::cout << "ERROR: Invalid value of Energy Point, it must be  '0 <= EP <= 100'." << std::endl;
		exit (0);
	}
	this->_energyPoints = newEnergyPoints;
}

void				ClapTrap::setAttackDamage ( unsigned int newAttackDamage ) {
	if (newAttackDamage >= 0 && newAttackDamage <= 100)
		this->_attackDamage = newAttackDamage;
	else {
		std::cout << "ERROR: Invalid value of Attack Damage, it must be  '0 <= AD <= 100'." << std::endl;
		exit (0);
	}
}

// getter - methods

std::string 		ClapTrap::getName () {
	return this->_name;
}

unsigned int		ClapTrap::getHitpoints () {
	return this->_hitpoints;
}

unsigned int		ClapTrap::getEnergyPoints () {
	return this->_energyPoints;
}

unsigned int		ClapTrap::getAttackDamage () {
	return this->_attackDamage;
}

// life-like - functions

void ClapTrap::attack ( std::string const &target ) {
	std::cout << "ClapTrap " << this->getName()
			  << " attack " << target
			  << ", causing " << this->getAttackDamage()
			  << " points of damage!" << std::endl;

	std::cout << "----------------------------------------------------" << std::endl;
}

void ClapTrap::takeDamage ( unsigned int amount ) {
	std::cout << this->getName() << " takes " << amount << " damage. " << this->getHitpoints() << " decreases on " << amount << " damage." << std::endl;
	this->setHitpoints(this->getHitpoints() - amount);
	ft_info(*this);
}

void ClapTrap::beRepaired ( unsigned int amount ) {
	std::cout << this->getName() << " repaired " << amount << " points of health. " << std::endl;
	this->setHitpoints(this->getHitpoints() + amount);
	ft_info(*this);
}

void ft_info ( ClapTrap &other ) {
	std::cout << "Name: " << other.getName() << std::endl;
	std::cout << "Hitpoints: " << other.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << other.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << other.getAttackDamage() << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}
