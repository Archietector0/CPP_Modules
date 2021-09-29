#include "AMateria.hpp"

AMateria::AMateria	() : _type("None") {
	std::cout << "AMateria default constructor was called!" << std::endl;
}

AMateria::~AMateria	() {
	std::cout << "AMateria destructor was called!" << std::endl;
}

AMateria::AMateria	( std::string const &type ) {
	std::cout << "AMateria COPY(type) constructor was called!" << std::endl;
	this->_type = type;
}

AMateria::AMateria	( const AMateria &other ) {
	std::cout << "AMateria COPY(all) constructor was called!" << std::endl;
	operator = (other);
}

AMateria			&AMateria::operator = ( const AMateria &other ) {
	std::cout << "Assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

std::string const	&AMateria::getType() const {
	return this->_type;
} //Returns the materia type

void				AMateria::use ( ICharacter& target ) {
	(void)target;
	std::cout << "Default function value!" << std::endl;
}
