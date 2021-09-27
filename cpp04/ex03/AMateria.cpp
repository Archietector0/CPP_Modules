#include "AMateria.hpp"

AMateria::AMateria	() : _type("None") {
	std::cout << "AMateria default constructor was called!" << std::endl;
}

AMateria::~AMateria	() {
	std::cout << "AMateria destructor was called!" << std::endl;
}

AMateria::AMateria	( std::string const & type ) {
	this->_type = type;
	std::cout << "AMateria COPY constructor-1 was called!" << std::endl;
}

AMateria::AMateria	( const AMateria& other ) {
	std::cout << "AMateria COPY constructor-2 was called!" << std::endl;
	operator = (other);
}

AMateria			&AMateria::operator = ( const AMateria& other ) {
	std::cout << "AMateria assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

std::string const	&AMateria::getType() const {
	return this->_type;
} //Returns the materia type
