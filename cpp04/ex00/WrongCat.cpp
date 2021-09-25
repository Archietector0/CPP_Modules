#include "WrongCat.hpp"

WrongCat::WrongCat  () {
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor was called!" << std::endl;
}

WrongCat::~WrongCat () {
    std::cout << "WrongCat destructor was called!" << std::endl;
}

WrongCat::WrongCat  ( const WrongCat &other ) {
    std::cout << "WrongCat COPY constructor was called!" << std::endl;
    operator = (other);
}

WrongCat            &WrongCat::operator = ( const WrongCat &other ) {
    std::cout << "WrongCat assignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

void                WrongCat::makeSound () const {
    std::cout << "WrongCat say: I'm not say because I'm not virtual!" << std::endl;
}
