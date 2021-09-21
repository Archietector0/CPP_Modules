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

//		arithmetic operators
		Fixed			operator * ( const Fixed &obj ) const;
		Fixed			operator + ( const Fixed &obj ) const;
		Fixed			operator - ( const Fixed &obj ) const;
		Fixed			operator / ( const Fixed &obj ) const;

//		comparison operators
		bool 			operator == ( const Fixed &obj ) const;
		bool			operator != ( const Fixed &obj ) const;
		bool			operator <= ( const Fixed &obj ) const;
		bool			operator >= ( const Fixed &obj ) const;
		bool			operator < ( const Fixed &obj ) const;
		bool			operator > ( const Fixed &obj ) const;

//		pre-increment
		Fixed			&operator ++ ();

//		post-increment
		Fixed			operator ++ ( int );

//		pre-decrement
		Fixed			&operator -- ();

//		post-decrement
		Fixed			operator -- ( int );


		const Fixed		&min ( const Fixed &a, const Fixed &b );
		const Fixed		&max ( const Fixed &a, const Fixed &b );


};

Fixed 	&min ( Fixed &a, Fixed &b );
Fixed 	&max ( Fixed &a, Fixed &b );

std::ostream	&operator << ( std::ostream &out, Fixed const& other );

#endif
