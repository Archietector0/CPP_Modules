#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T1>
class Array {
	private:
		T1		*someArr;
		size_t 	sizeArr;

	public:

		// Con / De - structor
		Array () : someArr(NULL), sizeArr(0) {
			std::cout << "Array default constructor was called!" << std::endl;
		};

		Array ( unsigned int n ) {
			this->someArr = new T1[n];
			this->sizeArr = n;
			std::cout << "Array DOP constructor was called!" << std::endl;
		};

		~Array () {
			if (this->someArr)
				delete[] this->someArr;
			std::cout << "Array destructor was called!" << std::endl;
		};

		// Copy constructor
		Array ( const Array &other ) {
			std::cout << "Array COPY constructor was called!" << std::endl;
			operator = (other);
		}

		// Assignation operator =
		Array &operator = ( const Array &other ) {
			if (this == &other)
				return *this;
			if (this->sizeArr != other.sizeArr)
				throw std::exception();
			for (size_t i = 0; other.someArr[i]; i++)
				this->someArr[i] = other.someArr[i];
			this->sizeArr = other.sizeArr;
			std::cout << "Assignation operator was called!" << std::endl;
			return (*this);
		}
		// Assignation operator []
		T1 	&operator[] (unsigned int n) {
		if (n >= this->sizeArr)
			throw std::exception();
		return (this->someArr[n]);
		}

		T1 const &operator[] (unsigned int n) const {
		if (n >= this->sizeArr)
			throw std::exception();
		return (this->someArr[n]);
		}

		// Getter method
		size_t getSizeArr () {
			return this->sizeArr;
		};

};

#endif