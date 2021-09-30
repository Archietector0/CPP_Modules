#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool				_val;
		const int			_cmpltGrade;
		const int			_signGrade;

	public:
		// Con / De - structor
		// Form	();
		Form	( const std::string name, const int cmpltGrade, const int signGrade );
		~Form	();

		// Copy constructor
		Form	( const Form &other );

		// Assignation operator
		Form &operator = ( const Form &other );

		// Extra functions
		const std::string	getName() const;
		const bool			getVal() const;
		int					getCmpltGrade();
		int					getSignGrade();

		void				beSigned( const Bureaucrat& bur );

};


#endif
