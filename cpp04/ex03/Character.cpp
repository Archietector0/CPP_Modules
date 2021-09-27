#include "Character.hpp"

Character::Character( const std::string &name ) : _name(name) {
	for (int i = 0; i < 4; ++i)
		materia[i] = 0;
	std::cout << "Character default constructor was called!" << std::endl;
}

Character::~Character() {
	std::cout << "Character destructor eas called!" << std::endl;
}

Character::Character ( const Character &other ) {
	std::cout << "Character COPY constructor was called!" << std::endl;
	operator = (other);
}

Character &Character::operator = ( const Character &other ) {
	std::cout << "Character assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	this->_name = other._name;
	for (int i = 0; i < 4; ++i) {
		materia[i] = other.materia[i];
	}
}

void		Character::equip ( AMateria* m ) {
	for (int i = 0; i < 4; ++i) {
		if (materia[i] != 0) {
			materia[i] = m;
			return;
		}
	}
}

void		Character::unequip( int idx ) {
	if (idx >= 0 && idx <= 3)
		materia[idx] = 0;
}
