#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <math.h>
#include <ostream>

class Fixed {
	private:
		int					pointVal;
		static const int	fracBits = 8;

	public:
		Fixed			();
		~Fixed			();
		Fixed			( const float value );
		Fixed			( const int value );
		Fixed			( const Fixed &other );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		void			setRawBits ( int const raw );
		int				getRawBits ( void ) const;
		Fixed			&operator = ( const Fixed &obj );
};

std::ostream	&operator << ( std::ostream &out, Fixed const& other );

#endif
