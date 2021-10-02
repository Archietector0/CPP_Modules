#include "Form.hpp"

Form::Form  () : _name("None"),
                _isSign(false),
                _gradeToSign(0),
                _gradeToExe(0) {
    std::cout << "Form default constructor was called!" << std::endl;
}

Form::~Form () {
    std::cout << "Form destructor was called!" << std::endl;
}

Form::Form  ( const std::string name, const int gradeToSign, const int gradeToExe ) : _name(name),
                                                                                     _gradeToSign(gradeToSign),
                                                                                     _gradeToExe(gradeToExe) {
    std::cout << "Form constructor was called!" << std::endl;
}

Form::Form  ( const Form &otherForm ) : _name(otherForm._name),
                                        _gradeToSign(otherForm._gradeToSign),
                                        _gradeToExe(otherForm._gradeToExe) {
    std::cout << "Form COPY constructor was called!" << std::endl;
    operator = (otherForm);
}

Form	    &Form::operator = ( const Form &otherForm ) {
    std::cout << "Form assignation operator was called!" << std::endl;
    if (this == &otherForm)
        return *this;
    this->_isSign = otherForm._isSign;
    return *this;
}

const std::string	Form::getName() const {
    return this->_name;
}

bool				Form::getIsSign() const {
    return this->_isSign;
}

const int			Form::getGradeToSign() const {
    return this->_gradeToSign;
}

const int			Form::getGradeToExe() const {
    return this->_gradeToExe;
}

const char			*Form::GradeTooLowException::what() const throw() {
	return ("Grade so low!");
}

const char			*Form::GradeTooHighException::what() const throw() {
	return ("Grade so high!");
}

std::ostream        &operator << (std::ostream &out, const Form &form ) {
    std::cout << "Form name: " << form.getName() << std::endl;
    std::cout << "Form sign?: " << form.getIsSign() << std::endl;
    std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    std::cout << "Form grade to exe: " << form.getGradeToExe() << std::endl;

	return (out);
}

void	            Form::beSigned ( const Bureaucrat &bur ) {
    if (bur.getGrade() <= this->getGradeToSign() && bur.getGrade() >= 1) {
        this->_isSign = true;
        std::cout << "FORM IS SIGN Sucesess" << std::endl;
    } else if (bur.getGrade() <= this->getGradeToSign() && bur.getGrade() <= 1) {
		throw Form::GradeTooLowException ();
    } else if (bur.getGrade() > this->getGradeToSign()) {
		throw Form::GradeTooHighException ();
    } else
        std::cout << "Hmmm, it's strange var!" << std::endl;
}






