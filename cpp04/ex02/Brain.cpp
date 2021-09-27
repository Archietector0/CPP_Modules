#include "Brain.hpp"

Brain::Brain () {
	std::cout << "Brain default constructor was called!" << std::endl;
}

Brain::~Brain () {
	std::cout << "Brain destructor was called!" << std::endl;
}

Brain::Brain ( const Brain &other ) {
	std::cout << "Brain COPY constructor was called!" << std::endl;
	operator = (other);
}

Brain &Brain::operator = ( const Brain &other ) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return *this;
}

void	Brain::setIdeas ( std::string idea ) {
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = idea;
	}
}

void	Brain::showIdeas () {
	for (int i = 0; i < 100; ++i)
		std::cout << (i + 1) << ") "<< this->ideas[i] << std::endl;
}
