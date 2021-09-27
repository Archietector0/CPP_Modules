#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#include "WrongAnimal.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        // De/Con - structor
        Animal  ();
        virtual~Animal ();

        // Copy constructor
        Animal  ( const Animal &other );

        // Asignation operator
        Animal  &operator = ( const Animal &other );

        // Virtual getter-method
        virtual std::string getType () const = 0;

        // Virtual DOP func
        virtual void        makeSound () const = 0;

};


#endif
