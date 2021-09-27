#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public:
		// Con/De - structor
		Brain	();
		~Brain	();

		// Copy constructor
		Brain	( const Brain &other );

		// Assignation operator
		Brain	&operator = ( const Brain &other );

		// Setter/Getter - method
		void		setIdeas( std::string idea );
		void		showIdeas();


		// ... Some code ...
};

#endif
