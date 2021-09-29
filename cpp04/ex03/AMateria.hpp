#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	protected:
		std::string _type;

	public:
		// Con / De - structor
		AMateria			();
		virtual ~AMateria	();

		// Copy constructor
		AMateria	( std::string const & type );
		AMateria	( const AMateria &other );

		// Assignation operator
		AMateria			&operator = ( const AMateria &other );

		// Extra functions
		std::string const	&getType () const; //Returns the materia type
		virtual AMateria	*clone () const = 0;
		virtual void		use ( ICharacter& target );


};


#endif
