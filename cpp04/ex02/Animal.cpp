#include "Animal.hpp"

Animal::Animal  () : _type("None") {
    std::cout << "Animal default constructor was called!" << std::endl;
}

Animal::~Animal () {
    std::cout << "Animal destructor was called!" << std::endl;
}

Animal::Animal  ( const Animal &other ) {
    std::cout << "Animal COPY constructor was called!" << std::endl;
    operator = (other);
}

Animal          &Animal::operator = ( const Animal &other ) {
    std::cout << "Animal asignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

// std::string     Animal::getType ( void ) const {
//     std::cout << "Animal default getter-method was called!" << std::endl;
//     return this->_type;
// }

// void            Animal::makeSound () const {
//     std::cout << "Fuck you leatherMan!!!" << std::endl;
// }
