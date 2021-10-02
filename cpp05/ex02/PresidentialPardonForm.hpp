#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        const std::string _target;
    
    public:
        // Con / De - structor
        PresidentialPardonForm  ( std::string target );
        ~PresidentialPardonForm ();

        // Copy constructor
        PresidentialPardonForm  ( const PresidentialPardonForm &other );

        // Assignation operator
        PresidentialPardonForm  &operator = ( const PresidentialPardonForm &other );

        // Extra fuctions
        const std::string       getPresidentialTarget() const;
        void                    action() const;
        void		            execute( Bureaucrat const &executor ) const;

};

#endif