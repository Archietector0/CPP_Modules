#include "Cure.hpp"

Cure::Cure	() {
	this->_type = "cure";
	std::cout << "Cure default constructor was called!" << std::endl;
}

Cure::~Cure	() {
	std::cout << "Cure destructor was called!" << std::endl;
}

Cure::Cure	( const Cure &other ) {
	std::cout << "Cure COPY constructor was called!" << std::endl;
	operator = (other);
}

Cure::Cure	( std::string const & type ) {
	this->_type = type;
}

Cure		&Cure::operator = ( const Cure &other ) {
	std::cout << "Cure assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

std::string const	&Cure::getType () const {
	return this->_type;
}

AMateria			*Cure::clone () const {
	return (new Cure());
}

void				Cure::use ( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
