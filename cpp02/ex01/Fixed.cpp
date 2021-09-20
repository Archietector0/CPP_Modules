#include "Fixed.hpp"

//		setter-method

void			Fixed::setRawBits ( int const raw ) {
	this->pointVal = raw;
}

//		getter-method

int				Fixed::getRawBits ( void ) const {
	return (this->pointVal);
}

Fixed::Fixed	() {
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed	( const float value ) {
	std::cout << "Float constructor called " << std::endl;
	this->pointVal = roundf(value * (1 << this->fracBits));
}

Fixed::Fixed	( const int value ) {
	std::cout << "Int constructor called " << std::endl;
	this->pointVal = value << this->fracBits;				// value * 256
}

Fixed::Fixed	( const Fixed &other ) /* : pointVal(other.pointVal) */ {
	std::cout << "Copy constructor called " << std::endl;
	operator= (other);
}

Fixed::~Fixed	() {
	std::cout << "Destructor called " << std::endl;
}

int				Fixed::toInt () const {
	return (this->pointVal >> this->fracBits);
}

float			Fixed::toFloat () const {
	float res = static_cast<float>(this->pointVal) / (1 << this->fracBits);
	return res;
}

Fixed			&Fixed::operator = ( const Fixed &obj ) {
	if (this == &obj)
		return *this;
	this->setRawBits(obj.getRawBits());
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<< ( std::ostream &out, Fixed const& other ) {
	out << other.toFloat();
	return out;
}
