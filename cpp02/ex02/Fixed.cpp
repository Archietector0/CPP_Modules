#include "Fixed.hpp"

//		setter-method

void			Fixed::setRawBits ( int const raw ) {
	this->pointVal = raw;
}

//		getter-method

int				Fixed::getRawBits ( void ) const {
	return (this->pointVal);
}

Fixed::Fixed	() : pointVal(0) {
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed	( const float value ) {
	std::cout << "Float constructor called " << std::endl;
	this->pointVal = roundf(value * (1 << this->fracBits));
}

Fixed::Fixed	( const int value ) {
	std::cout << "Int constructor called " << std::endl;
	this->pointVal = value << this->fracBits;
}

Fixed::Fixed	( const Fixed &other ) {
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

bool 			Fixed::operator == ( const Fixed &obj ) const {
	return this->pointVal == obj.pointVal;
}

bool 			Fixed::operator != ( const Fixed &obj ) const {
	return this->pointVal != obj.pointVal;
}

bool			Fixed::operator <= ( const Fixed &obj ) const {
	return this->pointVal <= obj.pointVal;
}

bool			Fixed::operator >= ( const Fixed &obj ) const {
	return this->pointVal >= obj.pointVal;
}

bool			Fixed::operator < ( const Fixed &obj ) const {
	return this->pointVal < obj.pointVal;
}

bool			Fixed::operator > ( const Fixed &obj ) const {
	return this->pointVal > obj.pointVal;
}

Fixed			&Fixed::operator ++ () {
	this->pointVal++;
	return *this;
}

Fixed			Fixed::operator ++ ( int value ) {
	Fixed buff(*this);

	++(*this);
	return buff;
}

Fixed			&Fixed::operator -- () {
	this->pointVal--;
	return *this;
}

Fixed			Fixed::operator -- ( int value ) {
	Fixed buff(*this);

	--(*this);
	return buff;
}

// overloads

Fixed			Fixed::operator * ( const Fixed &obj ) const {
	std::cout << "* operator called " << this << std::endl;
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed			Fixed::operator + ( const Fixed &obj ) const {
	std::cout << "+ operator called" << this << std::endl;
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed			Fixed::operator - ( const Fixed &obj ) const {
	std::cout << "- operator called" << this << std::endl;
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed			Fixed::operator / ( const Fixed &obj ) const {
	std::cout << "/ operator called" << this << std::endl;
	return (Fixed(this->toFloat() / obj.toFloat()));
}

const Fixed	&Fixed::min ( const Fixed &a, const Fixed &b ) {
	return (a < b ? a : b);
}

const	Fixed	&Fixed::max ( const Fixed &a, const Fixed &b ) {
	return (a > b ? a : b);
}
Fixed			&min ( Fixed &a, Fixed &b ) {
	return (a < b ? a : b);
}

Fixed			&max ( Fixed &a, Fixed &b ) {
	return (a < b ? a : b);
}

std::ostream	&operator<< ( std::ostream &out, Fixed const& other ) {
	out << other.toFloat();
	return out;
}
