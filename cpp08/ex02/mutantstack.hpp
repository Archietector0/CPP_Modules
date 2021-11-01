#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<int> {
	public:
	MutantStack () : std::stack<int>() { 
		std::cout  << "MutantStack default constructor was called\n" << std::endl; 
	}

	MutantStack ( MutantStack const &mutantstack ) : std::stack<int>(mutantstack) { 
		std::cout  << "MutantStack COPY constructor was called)\n" << std::endl; 
	}

	virtual ~MutantStack() { 
		std::cout << "MutantStack destructor was called \n" << std::endl; 
	}

	MutantStack &operator =( MutantStack const &mutanstack ) {
		this->c = mutanstack.c;
		return (*this);
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { 
		return (this->c.begin()); 
	}

	iterator end() { 
		return (this->c.end()); 
		}
};

#endif