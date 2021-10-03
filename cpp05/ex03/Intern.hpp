#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:
        std::string		formArray[3];
	    Form            *( Intern::*func[3] ) ( std::string target );

    public:
        // Con / De - structor
        Intern  ();
        ~Intern ();

        // Copy constructor
        Intern  ( const Intern &otherIntern );

        // Assignation operator
        Intern  &operator = ( const Intern &otherIntern );

        // Exceptions
	    class	FormNotFound : public std::exception {
		    const	char *what	() const throw();
	    };

        // Extra functions
        Form    *newShrubbery ( std::string target );
	    Form    *newRobotomy ( std::string target );
	    Form    *newPresident ( std::string target );
	    Form    *makeForm ( std::string form, std::string target );
	
};

#endif