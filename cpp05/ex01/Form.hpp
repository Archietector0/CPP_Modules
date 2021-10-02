#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Form {
	private:
		const std::string	_name;
		bool				_isSign;
		const int			_gradeToSign;
		const int			_gradeToExe;
		
	public:
		// Con / De - structor
		Form	();
		~Form	();
		Form	( const std::string name, const int gradeToSign, const int gradeToExe );

		// Copy constructor
		Form	( const Form &otherForm );

		// Assignation operator
		Form	&operator = ( const Form &otherForm );

		// getters - methods
		const std::string	getName() const;
		bool				getIsSign() const;
		const int			getGradeToSign() const;
		const int			getGradeToExe() const;

		// Execptions
		class	GradeTooHighException : public std::exception {
			const	char *what	() const throw();
		};

		class	GradeTooLowException : public std::exception {
			const	char *what	() const throw();
		};

		// Extra functions
		void	beSigned ( const Bureaucrat &bur );

};

std::ostream &operator<< ( std::ostream &out, const Form &form );


#endif