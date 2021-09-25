#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        // De/Con - structor
        Cat     ();
        ~Cat    ();

        // Copy constructor
        Cat     ( const Cat &other );

        // Asignation operator
        Cat     &operator = ( const Cat &other );

        // getter-method
        std::string getType () const;

        // Dop func
        void        makeSound () const;

};

#endif