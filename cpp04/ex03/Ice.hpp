#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
	private:

	public:
		// Con / De - structor
		Ice		();
		~Ice	();

		// Copy constructor
		Ice		( const Ice &other );
		Ice		( const std::string &type );

		// Assignation operator
		Ice		&operator = ( const Ice &other );

		// Dop virtual func's
		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use ( ICharacter& target );




};

#endif
