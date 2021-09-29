#include "MateriaSource.hpp"

MateriaSource::MateriaSource	() {
	for (int i = 0; i < 4; ++i)
		this->_amateria[i] = 0;
	std::cout << "MateriaSource default constructor was called!" << std::endl;
}

MateriaSource::~MateriaSource	() {
	for (int i = 0; i < 4; ++i)
		delete _amateria[i];
	std::cout << "MateriaSource destructor was called!" << std::endl;
}

MateriaSource::MateriaSource	( const MateriaSource &other ) {
	std::cout << "MateriaSource COPY constructor was called!" << std::endl;
	operator = (other);
}

MateriaSource					&MateriaSource::operator = ( const MateriaSource &other ) {
	std::cout << "MateriaSource assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i)
		this->_amateria[i] = other._amateria[i];
	return *this;
}

void			MateriaSource::learnMateria ( AMateria * m ) {
	int id = -1;
	for (int i = 0; i < 4; i++){
		if (_amateria[i] == NULL && id == -1)
			id = i;
	}
	if (id == -1){
		std::cout << "Error! Inventory full!\n" << std::endl;
		return ;
	}
	_amateria[id] = m;
}

AMateria		*MateriaSource::createMateria ( std::string const & type ) {
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	std::cout << "MateriaSource not found!" << std::endl;
	return (NULL);
}
