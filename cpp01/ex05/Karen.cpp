#include "Karen.hpp"

Karen::Karen () {
	ptr[0] =  &Karen::debug;
	ptr[1] =  &Karen::info;
	ptr[2] =  &Karen::warning;
	ptr[3] =  &Karen::error;
	arrError[0] = "DEBUG";
	arrError[1] = "INFO";
	arrError[2] = "WARNING";
	arrError[3] = "ERROR";
}

void Karen::debug( void ) {
    std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!\n" << std::endl;
}

void Karen::info( void ) {
    std::cout << "I cannot believe adding extra bacon cost more money. \
You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you just started working here last month.\n" << std::endl;

}
void Karen::error( void ) {
    std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;

}

void		Karen::complain(std::string level){
    int i;

	i = 0;
	while(i < 4 && level != arrError[i])
		++i;
	if (i == 4) {
        std::cout << "ERROR: Invalid index." << std::endl;
    }
	(this->*ptr[i])();
}

