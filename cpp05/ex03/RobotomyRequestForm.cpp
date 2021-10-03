#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm    ( std::string target ) : Form("Robotomy", 72, 45),
                                                                  _target(target) {
    std::cout << "RobotomyRequestForm constructor was called!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm   () {
    std::cout << "RobotomyRequestForm destructor was called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm    ( const RobotomyRequestForm& other ) : Form(other),
                                                                                   _target(other._target) {
    std::cout << "RobotomyRequestForm COPY constructor was called!" << std::endl;
    operator = (other);
}

RobotomyRequestForm &RobotomyRequestForm::operator = ( const RobotomyRequestForm& other ) {
    std::cout << "RobotomyRequestForm assignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    return *this;
}

const std::string       RobotomyRequestForm::getRobotomyTarget () const {
    return this->_target;
}

void		            RobotomyRequestForm::action () const {
    srand(time(0));
	int rand = std::rand();

	if (rand % 2)
		std::cout << this->getRobotomyTarget() << " has been successfully robotomized." << std::endl;
	else
		std::cout << this->getRobotomyTarget() << " has been unsuccessfully robotomized." << std::endl;
}

void		            RobotomyRequestForm::execute( Bureaucrat const &bur ) const {
    Form::execute(bur);
    this->action();
}

