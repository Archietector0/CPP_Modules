#include "ScavTrap.hpp"

ScavTrap::ScavTrap	() {
	std::cout << "ScavTrap default constructor was called! " << std::endl;

	this->setName("None");
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	ft_info (*this);
}

ScavTrap::ScavTrap	( std::string newName ) {
	std::cout << "ScavTrap constructor was called! " << std::endl;

	this->setName(newName);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	ft_info (*this);
}

ScavTrap::~ScavTrap	() {
	std::cout << "ScavTrap destructor was called! " << std::endl;
}

ScavTrap::ScavTrap	( const ScavTrap &other ) {
	std::cout << "ScavTrap copy constructor was called! " << std::endl;
	operator=(other);
	ft_info(*this);
}

ScavTrap			&ScavTrap::operator = (const ScavTrap &other) {
	this->setName(other._name);
	this->setHitpoints(other._hitpoints);
	this->setEnergyPoints(other._energyPoints);
	this->setAttackDamage(other._attackDamage);
	return *this;
}

void				ScavTrap::guardGate () {
	std::cout << "ScavTrap " << this->_name << " is on guardGate mode!!\n" << std::endl;
}
