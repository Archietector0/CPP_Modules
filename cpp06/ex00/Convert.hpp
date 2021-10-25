#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits.h>

class Convert {
	private:
		std::string param;
		std::string type;

		// Private methods
		int		checkingVal ();
		int		checkLimits	();
		void	ChToCh		();
		void	IntToCh		();
		void	DoubleToCh	();

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
		int convToDouble( std::string str );






};

int		wrtError ( std::string str );



#endif
