#include "Character.hpp"

Character::Character	() {
	for (int i = 0; i < 4; ++i)
		_amateria[i] = 0;
	std::cout << "Character default constructor was called!" << std::endl;
}

Character::Character	( std::string name ) : type(name) {
	for (int i = 0; i < 4; i++)
		this->_amateria[i] = 0;
	std::cout << "Character COPY(type) constructor was called!" << std::endl;
}


Character::~Character	() {
	for (int i = 0; i < 4; ++i)
		delete _amateria[i];
	std::cout << "Character destructor was called!" << std::endl;
}

Character::Character	( const Character &other ) {
	std::cout << "Character COPY constructor was called!" << std::endl;
	operator = (other);
}

Character				&Character::operator = ( const Character &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	for (int i = 0; i < 4; ++i)
		this->_amateria[i] = other._amateria[i];
	return *this;
}

std::string const		&Character::getName () const {
	return this->type;
}

void					Character::equip ( AMateria* m ) {
	int id = -1;
	for (int i = 0; i < 4; i++){
		if (_amateria[i] == NULL && id == -1)
			id = i;
	}
	if (id == -1){
		std::cout << "Error! Inventory full!" << std::endl;
		return ;
	}
	_amateria[id] = m;
}

void					Character::unequip ( int idx ) {
	for (int i = 0; i < 4; ++i)
		if (idx >= 0 && idx <= 3)
			_amateria[i] = 0;
}

void					Character::use ( int idx, ICharacter& target ) {
	if (idx >= 0 && idx <= 3 && this->_amateria[idx] != NULL)
		_amateria[idx]->use(target);
	else
		std::cout << "Invalid value!" << std::endl;
}
