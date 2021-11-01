#include "span.hpp"

Span::Span  () {
    std::cout << "Span default constructor was called!" << std::endl;
}

Span::~Span () {
    std::cout << "Span destructor was called!" << std::endl;
}

Span::Span  ( unsigned int N ) : size(N) {
    std::cout << "Span DOP constructor was called!" << std::endl;
}

Span::Span ( const Span &other ) {    
    operator = (other);
}

Span &Span::operator = ( const Span &other ) {
    if (this == &other)
		return *this;
	this->intArr = other.intArr;
	this->size = other.size;
	return (*this);
}


void            Span::addNumber ( int number ) {

    if (this->intArr.size() >= this->size)
        throw std::string("ERROR: Array is full");
    this->intArr.push_back(number);
}

void			Span::addNumber	( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {

    if (this->size < static_cast<unsigned int> (end - begin)) {
        throw std::string("ERROR: No enough place");
    }
    while (begin != end) {
        addNumber(*begin);
        begin++;
    }
}




unsigned int    Span::longestSpan   () {
    int max;
    int min;

    if (this->intArr.size() <= 1)
        throw std::string("ERROR: Not enough elements");

    max = *std::max_element(this->intArr.begin(), this->intArr.end());
    min = *std::min_element(this->intArr.begin(), this->intArr.end());

    return max - min;
}

unsigned int	Span::shortestSpan  () {
    int max;
    int min;
    int buff;

    if (this->intArr.size() <= 1)
        throw std::string("ERROR: Not enough elements");

    std::vector<int>	intArr2;
    intArr2 = this->intArr;

    min = *std::min_element(intArr2.begin(), intArr2.end());
    buff = min;
    intArr2.erase(std::min_element(intArr2.begin(), intArr2.end()));
    max = *std::min_element(intArr2.begin(), intArr2.end());

    return max - min;
}

unsigned int    Span::getSize () {
    return this->size;
}

void		    Span::printArray() {
    if (this->intArr.size() <= 0)
        throw std::string("ERROR: Array is empty");
    for (unsigned int i = 0; i < this->size; ++i) {
        std::cout << i + 1 << ") " << this->intArr[i] << std::endl;
    }
}

std::vector<int>	Span::getArr () {
    return this->intArr;
}


