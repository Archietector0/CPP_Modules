#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

class Convert {
	private:
		std::string parametr;
		std::string typeParametr;
	
	public:
		// Con / De - structor
		Convert		();
		~Convert	();

		// Copy constructor
		Convert		( Convert &other );

		// Assignation operator
		Convert		&operator = ( Convert &other );

		// External func's
		std::string getParametr		();
		std::string getTypeParametr ();
		void		setParametr		( char *data );
		void		setTypeParametr	( std::string data );

		int		convToChar ();
		int		convToInt ();
		int		convToFloat();


};

int         isDigit ( std::string str );
int         isDisplayable ( char sym );



#endif