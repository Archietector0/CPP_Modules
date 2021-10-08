#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

class Convert {
	private:
		std::string _value;
		std::string _type;

	public:
		// Con / De - structor
		Convert		();
		~Convert	();

		// Copy constructor
		Convert		( const Convert& otherConvert );

		// Assignation operator
		Convert		&operator = ( const Convert& otherConvert );

		// Extra functions
		void		setValue( std::string value );
		std::string	getValue();
		void		setType( std::string type );
		std::string	getType();
		void		convertToChar( std::string type );
		// void		convertToInt();

		void		parseValue( std::string value );
};

int		ftError( const std::string str );
int		isDigit( char sym );


#endif
