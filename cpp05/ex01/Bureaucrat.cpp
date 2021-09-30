#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat	() : _name("None"), _grade(2) {
	std::cout << "Bureaucrat default constructor was called!" << std::endl;
}

Bureaucrat::~Bureaucrat	() {
	std::cout << "Bureaucrat destructor was called!" << std::endl;
}

Bureaucrat::Bureaucrat	( const std::string name, int grade ) : _name(name), _grade(grade) {
	if (_grade > 150)
		throw Bureaucrat::GradeTooLow();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHigh();
	else
		std::cout << "Bureaucrat constructor was called!" << std::endl;
}

Bureaucrat::Bureaucrat	( const Bureaucrat& other ) {
	std::cout << "Bureaucrat COPY constructor was called!" << std::endl;
	operator = (other);
}

Bureaucrat			&Bureaucrat::operator = ( const Bureaucrat& other ) {
	std::cout << "Bureaucrat assignation operator was called!" << std::endl;
	if (this == &other)
		return *this;
	this->_grade = other._grade;
	return *this;
}

const std::string	Bureaucrat::getName() const {
	return this->_name;
}

int					Bureaucrat::getGrade() const {
	return this->_grade;
}

void				Bureaucrat::decGrade() {
	this->_grade += 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLow();
}

void				Bureaucrat::incGrade() {
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHigh();
}

void				Bureaucrat::signForm ( const Form& form ) {
	if (form.getVal() == true)
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << form.getName() << " because grade is invalid." << std::endl;
}

const char			*Bureaucrat::GradeTooLow::what() const throw() {
	return ("Grade so low!");
}

const char			*Bureaucrat::GradeTooHigh::what() const throw() {
	return ("Grade so high!");
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &b) {
	std::cout << "Name is: " << b.getName() << std::endl;
	std::cout << "Grade is: " << b.getGrade() << std::endl;
	return (out);
}
