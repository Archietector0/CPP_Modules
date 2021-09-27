#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {
	protected:
		std::string _type;

	public:
		// Con/De - structor
		AMateria			();
		virtual ~AMateria	();

		// Copy constructor
		AMateria	( std::string const & type );
		AMateria	( const AMateria& type );

		// Assignation operator
		AMateria	&operator = ( const AMateria& other );

		// [...]

		std::string const	&getType() const;
		virtual AMateria			*clone () const = 0;
		virtual void				use ( ICharacter& target ) = 0;

};

#endif
