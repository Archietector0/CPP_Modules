#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
	private:
		int					pointVal;
		static const int	fracBits = 8;

	public:
		Fixed	();
		~Fixed	();
		Fixed	( const Fixed	&other );
		Fixed&	operator = ( const Fixed& other );
		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );
};



#endif
