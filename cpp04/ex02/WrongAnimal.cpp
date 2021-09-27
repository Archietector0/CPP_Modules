#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : _type("None") {
    std::cout << "WrongAnimal default constructor was called!" << std::endl;
}

WrongAnimal::~WrongAnimal () {
    std::cout << "WrongAnimal destructor was called!" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal &other ) {
    std::cout << "WrongAnimal COPY constructor was called!" << std::endl;
    operator = (other);
}

WrongAnimal &WrongAnimal::operator = ( const WrongAnimal &other ) {
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

void           WrongAnimal::makeSound () const {
    std::cout << "It's base unvirtual method!" << std::endl;
}
