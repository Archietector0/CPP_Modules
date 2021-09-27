#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain		*catBrain;
		std::string	idea;

	public:
		// De/Con - structor
		Cat		();
		~Cat	();

		// Copy constructor
		Cat		( const Cat &other );

		// Asignation operator
		Cat		&operator = ( const Cat &other );

		// getter-method
		std::string	getType () const;

		// Dop func
		void		makeSound () const;
		void		setCatIdea ( std::string idea );
		void		showCatIdea ();
		// std::string	getIdea();


};

#endif
