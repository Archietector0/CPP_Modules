#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private:
    
    public:
        // De/Con - structor
        Dog     ();
        ~Dog    ();

        // Copy constructor
        Dog     ( const Dog &other );

        // Asignation operator
        Dog     &operator = ( const Dog &other );

        // getter-method
        std::string getType () const;

        // virtual func
        void        makeSound () const;

};

#endif
