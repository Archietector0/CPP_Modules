#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_amateria[4];

	public:
		// Con / De - structor
		MateriaSource	();
		~MateriaSource	();

		// Copy constructor
		MateriaSource	( const MateriaSource &other );

		// Assignation operator
		MateriaSource	&operator = ( const MateriaSource &other );

		// Extra functions
		void			learnMateria ( AMateria * m );
		AMateria		*createMateria ( std::string const & type );
};


#endif
