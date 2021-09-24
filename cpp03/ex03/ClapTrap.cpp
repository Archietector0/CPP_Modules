#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : _name("None"),
                        _hitpoints(10),
                        _energyPoints(10),
                        _attackDamage(0) {
    std::cout << "ClapTrap default constructor was called!" << std::endl;
    playerInfo();
}

ClapTrap::ClapTrap ( const std::string &name ) : _name(name),
                                          _hitpoints(10),
                                          _energyPoints(10),
                                          _attackDamage(0) {
    std::cout << "ClapTrap dop constructor was called!" << std::endl;
    playerInfo();
}

ClapTrap::~ClapTrap () {
    std::cout << "ClapTrap default destructor was called!" << std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap &other ) {
    std::cout << "ClapTrap COPY constructor was called!" << std::endl;
    operator = (other);
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &other ) {
    std::cout << "ClapTrap assignation operator was called!" << std::endl;
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    playerInfo();
    return *this;
}

void        ClapTrap::playerInfo () {
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "HitPoints: " << _hitpoints << std::endl;
    std::cout << "EnergyPoints: " << _energyPoints << std::endl;
    std::cout << "AttackDamage: " << _attackDamage << std::endl;

    std::cout << "-------------------------------------" << std::endl;
}

void            ClapTrap::attack ( std::string const & target ) {
    std::cout << "ClapTrap " << this->_name
              << " attack " << target << ", causing "
              << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
}

void            ClapTrap::takeDamage ( unsigned int amount ) {
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

void            ClapTrap::beRepaired ( unsigned int amount ) {
    std::cout << this->_name << " repaired " << amount << " points of HP." << std::endl;
    if (amount >= 50000)
        return;
    this->_hitpoints += amount;
    playerInfo();
}
