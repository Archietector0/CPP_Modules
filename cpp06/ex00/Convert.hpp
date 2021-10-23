#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

class Convert {
	private:
		std::string param;
		std::string type;

		// Private methods
		int checkingVal		();
		void	ChToCh		();
		void	IntToCh		();
		// void	FloatToCh	();
		void	DoubleToCh	();



		void	ChToInt		();
		void	IntToInt	();
		void	DoubleToInt	();



		void	ChToDouble	();
		void	IntToDouble	();
	
	public:
		// Con / De - structor
		Convert		();
		~Convert	();

		// Copy constructor
		Convert ( const Convert & other );

		// Assignation operator
		Convert &operator = ( const Convert &other );

		// Methods
		int convToChar( std::string str );
		int convToInt( std::string str );
		int convToFloat( std::string str );
		int convToDouble( std::string );






};

int		wrtError ( std::string str );



#endif
