#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        // Con/De - structor
        WrongCat    ();
        ~WrongCat   ();

        // Copy constructor 
        WrongCat    ( const WrongCat &other );

        // Assignation operator
        WrongCat    &operator = ( const WrongCat &other );

        // Dop func
        void        makeSound () const;
};

#endif