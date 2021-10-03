#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : Form("President", 25, 5),
                                                                        _target(target) {
    std::cout << "PresidentialPardonForm constructor was called!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm () {
    std::cout << "PresidentialPardonForm destructor was called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &other ) : Form(other), _target(other._target) {
    std::cout << "PresidentialPardonForm COPY constructor was called!" << std::endl;
    operator = (other);
}

PresidentialPardonForm  &PresidentialPardonForm::operator = ( const PresidentialPardonForm &other ) {
    std::cout << "PresidentialPardonForm assignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    return *this;
}

const std::string       PresidentialPardonForm::getPresidentialTarget() const {
    return this->_target;
}

void                    PresidentialPardonForm::action() const {
    std::cout << this->getPresidentialTarget() << " has been pardoned! byyyy Zafod Beeblebrox." << std::endl;
} 

void		            PresidentialPardonForm::execute( Bureaucrat const &bur ) const {
	Form::execute(bur);
	this->action();
}

