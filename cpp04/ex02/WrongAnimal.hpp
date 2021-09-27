#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
    protected:
        std::string _type;
    
    public:
        // Con/De - structor
        WrongAnimal             ();
        virtual ~WrongAnimal    ();

        // Copy constructor
        WrongAnimal     ( const WrongAnimal &other );

        // Assignation operator
        WrongAnimal     &operator = ( const WrongAnimal &other );

        // Dop func
        void            makeSound () const;
};


#endif