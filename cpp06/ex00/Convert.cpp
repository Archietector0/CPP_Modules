#include "Convert.hpp"

Convert::Convert	() : _value("NoneV"), _type("NoneT") {
	std::cout << "Convert default constructor was called!" << std::endl;
}

Convert::~Convert	() {
	std::cout << "Convert destructor was called!" << std::endl;
}

Convert::Convert	( const Convert& otherConvert ) {
	std::cout << "Convert COPY constructor was called!" << std::endl;
	operator = (otherConvert);
}

Convert				&Convert::operator = ( const Convert& otherConvert ) {
	std::cout << "Convert assignation operator was called!" << std::endl;
	if (this == &otherConvert)
		return *this;
	this->_value = otherConvert._value;
	this->_type = otherConvert._type;
	return *this;
}

void				Convert::setValue( std::string value ) {
	this->_value = value;
}

std::string			Convert::getValue() {
	return this->_value;
}

void				Convert::setType( std::string type ) {
	this->_type = type;
}

std::string			Convert::getType() {
	return this->_type;
}

void				Convert::parseValue( std::string value ) {
	int		p;
	int		i;
	char	pm;

	if (value.length() == 1 && !isdigit(value[0]))
		this->_type = "сhar";

	for (i = 0; i < value.length(); ++i) {
		if (value[i] ==)

	}


}

void				Convert::convertToChar( std::string type ) {
	if (this->_type != type || this->_type == "NoneT") {
		std::cout << this->_type << ": " << std::endl;
	} else {
		int	charInt = this->_value[0] + 0;
		// std::cout << charInt << std::endl;
		if (charInt >= 33 && charInt <= 126)
			std::cout << this->_type << ": '" << static_cast<char>(charInt) << "'" << std::endl;
		else
			std::cout << this->_type << ": non displayable" << std::endl;
	}
}

		// void		convertToChar();




// if (_type == "char")
// 		std::cout << WHITE << "Char : " << BLUE << _string << std::endl;
