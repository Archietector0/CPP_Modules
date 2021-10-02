#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        const std::string _target;
    
    public:
        // Con / De - structor
        RobotomyRequestForm     ( std::string target );
        ~RobotomyRequestForm    ();

        // Copy constructor
        RobotomyRequestForm     ( const RobotomyRequestForm& other );

        // Assignation operator
        RobotomyRequestForm &operator = ( const RobotomyRequestForm& other );

        // Extra functions
        const std::string       getRobotomyTarget() const;
        void		            action() const ;


};

#endif