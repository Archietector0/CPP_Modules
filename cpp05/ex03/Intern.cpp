#include "Intern.hpp"

Intern::Intern  () {
    this->formArray[0] = "Shrubbery request";
    this->formArray[1] = "Robotomy request";
    this->formArray[2] = "Presidential request";

    this->func[0] = &Intern::newShrubbery;
    this->func[1] = &Intern::newRobotomy;
    this->func[2] = &Intern::newPresident;

    std::cout << "Intern default constructor was called!" << std::endl;
}

Intern::~Intern () {
    std::cout << "Intern destructor was called!" << std::endl;
}

Intern::Intern  ( const Intern &otherIntern ) {
    std::cout << "Intern COPY constructor was called!" << std::endl;
    operator = (otherIntern);
}

Intern          &Intern::operator = ( const Intern &otherIntern ) {
    std::cout << "Intern assignation operator was called!" << std::endl;
    if (this == &otherIntern)
        return *this;
    this->formArray[0] = otherIntern.formArray[0];
    this->formArray[1] = otherIntern.formArray[1];
    this->formArray[2] = otherIntern.formArray[2];

    this->func[0] = otherIntern.func[0];
    this->func[1] = otherIntern.func[1];
    this->func[2] = otherIntern.func[2];
    return *this;
}

Form            *Intern::newShrubbery ( std::string target ) {
    return (new ShrubberyCreationForm(target));
}

Form            *Intern::newRobotomy ( std::string target ) {
    return (new RobotomyRequestForm(target));
}

Form            *Intern::newPresident ( std::string target ) {
    return (new PresidentialPardonForm(target));
}

Form            *Intern::makeForm ( std::string form, std::string target ) {
    for (int i = 0; i < 3; i++){
		if (form == this->formArray[i]){
			std::cout << "Intern creates form." << std::endl;	
			return ((this->*func[i])(target));
		}
	}
	throw Intern::FormNotFound();
}

const char      *Intern::FormNotFound::what() const throw() {
	return ("Form not found!");
}