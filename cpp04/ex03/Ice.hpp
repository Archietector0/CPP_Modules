#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		// Con / De - structor
		Ice		();
		~Ice	();

		// Copy constructor
		Ice		( const Ice &other );
		Ice		( std::string const & type );

		// Assignation operator
		Ice		&operator = ( const Ice &other );

		// Extra functions
		std::string const	&getType () const;
		AMateria			*clone () const;
		void				use ( ICharacter& target );




};

#endif
