#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>


class Base {
    public:
        // Destructor
        virtual ~Base   ();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base    *generate   ();
void    identify    ( Base *p );
void    identify    ( Base &p );



#endif
