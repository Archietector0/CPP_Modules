#include "Cat.hpp"

Cat::Cat    () {
    this->_type = "Cat";
    std::cout << "Cat default constructor was called!" << std::endl;
}

Cat::~Cat   () {
    std::cout << "Cat destructor was called!" << std::endl;
}

Cat::Cat    ( const Cat &other ) {
    std::cout << "Cat COPY constructor was called!" << std::endl;
    operator = (other);
}

Cat         &Cat::operator = ( const Cat &other ) {
    std::cout << "Cat asignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

std::string Cat::getType () const {
    return this->_type;
}

void        Cat::makeSound () const {
    std::cout << "Cat say: Miyaa-ya-yaaa-uuuuu!!!" << std::endl;
}

