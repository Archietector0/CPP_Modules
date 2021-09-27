#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria	*materia[4];

	public:
		// Con / De - structor
		Character( const std::string &name );
		~Character();

		// Copy constructor
		Character( const Character &other );

		// Assignation operator
		Character &operator = ( const Character &other );


		std::string const & getName() const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
};

};


#endif
