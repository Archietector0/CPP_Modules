#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    private:
        const std::string _target;
    
    public:
        // Con / De - structor
        ShrubberyCreationForm   ( const std::string target );
        ~ShrubberyCreationForm  ();

        // Copy constructor
        ShrubberyCreationForm   ( const ShrubberyCreationForm& other );

        // Assignation operator
        ShrubberyCreationForm   &operator = ( const ShrubberyCreationForm& other );

        //Extra fuctions
        const std::string       getShrubberyTarget() const;
        void		            action() const ;
        void		            execute( Bureaucrat const &bur ) const;





};

#endif