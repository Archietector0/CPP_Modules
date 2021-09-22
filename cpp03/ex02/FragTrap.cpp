#include "FragTrap.hpp"

FragTrap::FragTrap	() {
	std::cout << "FragTrap default constructor was called! " << std::endl;

	this->setName("None");
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	ft_info (*this);
}

FragTrap::FragTrap	( std::string newName ) {
	std::cout << "FragTrap constructor was called! " << std::endl;

	this->setName(newName);
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	ft_info (*this);
}

FragTrap::~FragTrap	() {
	std::cout << "FragTrap destructor was called! " << std::endl;
}

FragTrap::FragTrap	( const FragTrap &other ) {
	std::cout << "FragTrap copy constructor was called! " << std::endl;
	operator=(other);
	ft_info(*this);
}

FragTrap			&FragTrap::operator = (const FragTrap &other) {
	this->setName(other._name);
	this->setHitpoints(other._hitpoints);
	this->setEnergyPoints(other._energyPoints);
	this->setAttackDamage(other._attackDamage);
	return *this;
}

void				FragTrap::highFivesGuys () {
	std::cout << "Heey, give me highFives\n" << std::endl;
}
