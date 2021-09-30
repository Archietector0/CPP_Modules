#include "Form.hpp"

// Form::Form	() : _name("None"), _val(0), _cmpltGrade(5), _signGrade(5) {
// 	std::cout << "Form default constructor was called!" << std::endl;
// }

Form::Form	( const std::string name, const int cmpltGrade, const int signGrade ) :
															_name(name),
															_val(false),
															_cmpltGrade(cmpltGrade),
															_signGrade(signGrade) {
	std::cout << "Form default constructor was called!" << std::endl;
}

Form::~Form	() {
	std::cout << "Form destructor was called!" << std::endl;
}

Form::Form	( const Form &other ) : _name("None"),
									_val(false),
									_cmpltGrade(5),
									_signGrade(5) {
	std::cout << "Form COPY constructor was called!" << std::endl;
	operator = (other);
}

Form		&Form::operator = ( const Form &other ) {
	if (this == &other)
		return *this;
	this->_val = other._val;
	return *this;
}

const std::string	Form::getName() const {
	return this->_name;
}

const bool			Form::getVal() const {
	return this->_val;
}

int					Form::getCmpltGrade() {
	return this->_cmpltGrade;
}

int					Form::getSignGrade() {
	return this->_signGrade;
}

void				Form::beSigned( const Bureaucrat& bur ) {
	if (bur.getGrade() <= this->_signGrade)
		_val = true;
}
