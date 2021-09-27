#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	private:

	public:
		// Con / De - structor
		Cure	();
		~Cure	();

		// Copy constructor
		Cure	( const std::string &type );
		Cure	( const Cure &other );

		// Assignation operator
		Cure	&operator = ( const Cure& other );

		// Dop virtual func's
		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use ( ICharacter& target );



};

#endif
