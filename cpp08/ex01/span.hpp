#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int>	intArr;
		unsigned int		size;

	public:


		// Con / De - structors
		Span	();
		Span	( unsigned int N );
		~Span	();

		// Copy constructors
		Span ( const Span &other );

		// Assignation operator
		Span &operator = ( const Span &other );


		// External funcs
		void			addNumber		( int number );
		void			addNumber		( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		unsigned int	longestSpan		();
		unsigned int	shortestSpan	();

		unsigned int		getSize 	();
		std::vector<int>	getArr 		();
		void				printArray	();

};


#endif




