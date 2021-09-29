#include "Ice.hpp"

Ice::Ice	() {
	this->_type = "ice";
	std::cout << "Ice default constructor was called!" << std::endl;
}

Ice::~Ice	() {
	std::cout << "Ice destructor was called!" << std::endl;
}

Ice::Ice		( std::string const & type ) {
	this->_type = type;
}

Ice::Ice	( const Ice &other ) {
	std::cout << "Ice COPY constructor was called!" << std::endl;
	operator = (other);
}

Ice					&Ice::operator = ( const Ice &other ) {
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

AMateria			*Ice::clone () const {
	return (new Ice());
}

void				Ice::use ( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const	&Ice::getType () const {
	return this->_type;
}
