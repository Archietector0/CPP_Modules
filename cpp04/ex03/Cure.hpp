#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		// Con / De - structor
		Cure	();
		~Cure	();

		// Copy operator
		Cure	( const Cure &other );
		Cure	( std::string const & type );

		// Assignation operator
		Cure	&operator = ( const Cure &other );

		// Extra functions
		std::string const	&getType () const;
		AMateria			*clone () const;
		void				use ( ICharacter& target );


};

#endif
