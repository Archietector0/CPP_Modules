#include "Base.hpp"

Base::~Base () {
    std::cout << "Base destructor was called!" << std::endl;
}

Base    *generate () {
    int randNum = 0;

    randNum = rand() % 10 + 1;
    if (randNum % 2 != 0)
        return (new A);
    else if (randNum % 3 != 0)
        return (new B);
    else if (randNum % 6 != 0)
        return (new C);
    else
        return NULL;
}

void    identify ( Base *p ) {
    if (dynamic_cast<A *> (p))
        std::cout << "identify(*): class 'A'" << std::endl;
    else if (dynamic_cast<B *> (p))
        std::cout << "identify(*): class 'B'" << std::endl;
    else if (dynamic_cast<C *> (p))
        std::cout << "identify(*): class 'C'" << std::endl;
    else
        std::cout << "identify(*): ERROR" << std::endl;
}

void    identify ( Base &p ) {
    if (dynamic_cast<A *> (&p))
        std::cout << "identify(&): class 'A'" << std::endl;
    else if (dynamic_cast<B *> (&p))
        std::cout << "identify(&): class 'B'" << std::endl;
    else if (dynamic_cast<C *> (&p))
        std::cout << "identify(&): class 'C'" << std::endl;
    else
        std::cout << "identify(&): ERROR" << std::endl;
}
