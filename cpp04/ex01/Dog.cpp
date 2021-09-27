#include "Dog.hpp"

Dog::Dog		() : dogBrain(new Brain()) {
	this->_type = "Dog";
	std::cout << "Dog default constructor was called!" << std::endl;
}

Dog::~Dog		() {
	delete dogBrain;
	std::cout << "Dog destructor was called!" << std::endl;
}

Dog::Dog		( const Dog &other ) : dogBrain (new Brain()) {
	std::cout << "Dog COPY constructor was called!" << std::endl;
	operator = (other);
}

Dog				&Dog::operator = ( const Dog &other ) {
	if (this == &other)
		return *this;
	this->_type = other._type;
	*(this->dogBrain) = *(other.dogBrain);
	return *this;
}

std::string		Dog::getType () const {
	return this->_type;
}

void			Dog::makeSound () const {
	std::cout << "Dog say: Guafff-fff-ffuck-gavfvf!!" << std::endl;
}

void			Dog::setDogIdea ( std::string idea ) {
	this->dogBrain->setIdeas(idea);
}

void			Dog::showDogIdea () {
	this->dogBrain->showIdeas();
}
