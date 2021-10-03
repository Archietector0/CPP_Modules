#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include "Form.hpp"

int		main() {

	Intern		interPtr;
	Bureaucrat	Bobby("Bobby", 1);
	
	Form *shrub = interPtr.makeForm("Shrubbery request", "home");
	Form *robot = interPtr.makeForm("Robotomy request", "robot");
	Form *president = interPtr.makeForm("Presidential request", "president");
	
	try {
		Form *notExist = interPtr.makeForm("kein", "kein!!");
		notExist->beSigned(Bobby);
	} catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }
	
	std::cout << std::endl;
	try {
		shrub->beSigned(Bobby);
		robot->beSigned(Bobby);
		president->beSigned(Bobby);
		Bobby.executeForm(*shrub);
		Bobby.executeForm(*robot);
		Bobby.executeForm(*president);
	} catch (std::exception &exc) { 
		std::cout << "ERROR IS: " << exc.what() << std::endl;
	}
}

