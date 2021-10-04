#include "Convert.hpp"

Convert::Convert	() {
	std::cout << "Convert default constructor was called!" << std::endl;
}

Convert::~Convert	() {
	std::cout << "Convert destructor was called!" << std::endl;
}

Convert::Convert	( const Convert &other ) {
	std::cout << "Convert destructor was called!" << std::endl;
	operator = (other);
}

Convert				&Convert::operator = ( const Convert &other ) {
	if (this == &other)
		return *this;
	

}
