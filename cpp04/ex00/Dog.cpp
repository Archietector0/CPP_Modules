#include "Dog.hpp"

Dog::Dog () {
    this->_type = "Dog";
    std::cout << "Dog default constructor was called!" << std::endl;
}

Dog::~Dog () {
    std::cout << "Dog destructor was called!" << std::endl;
}

Dog::Dog    ( const Dog &other ) {
    std::cout << "Dog COPY constructor was called!" << std::endl;
    operator = (other);
}

Dog     &Dog::operator = ( const Dog &other ) {
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

std::string Dog::getType () const {
    return this->_type;
}

void        Dog::makeSound () const {
    std::cout << "Dog say: Guafff-fff-ffuck-gavfvf!!" << std::endl;
}

