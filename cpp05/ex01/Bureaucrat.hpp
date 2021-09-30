#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <string>
#include <iostream>

#include "Form.hpp"

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		// Con / De - structor
		Bureaucrat	();
		Bureaucrat	( const std::string name, int grade );
		~Bureaucrat	();

		// Copy constructor
		Bureaucrat	( const Bureaucrat& other );

		// Assignation operator
		Bureaucrat	&operator = ( const Bureaucrat& other );

		// Extra functions
		const std::string	getName() const;
		int					getGrade() const;
		void				decGrade();
		void				incGrade();

		void				signForm( const Form& form );

	// Execptions
	class	GradeTooHigh : public std::exception {
		const	char *what	() const throw();
	};

	class	GradeTooLow : public std::exception {
		const	char *what	() const throw();
	};

};

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
