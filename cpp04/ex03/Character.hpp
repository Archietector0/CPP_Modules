#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	type;
		AMateria	*_amateria[4];

	public:
		// Con / De - structor
		Character	();
		~Character	();

		// Copy constructor
		Character	( const Character &other );
		Character	( std::string name );

		// Assignation operator
		Character	&operator = ( const Character &other );

		// Extra functions
		std::string const	&getName () const;
		void				equip ( AMateria* m );
		void				unequip ( int idx );
		void				use ( int idx, ICharacter& target );

};



#endif
