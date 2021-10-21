#include "Convert.hpp"

Convert::Convert    () {
    // std::cout << "Convert constructor was called!" << std::endl;
}
		
Convert::~Convert	() {
    // std::cout << "Convert destructor was called!" << std::endl;
}

Convert::Convert	( Convert &other ) {
    std::cout << "Convert COPY constructor was called!" << std::endl;
}

Convert		        &Convert::operator = ( Convert &other ) {
    std::cout << "Convert assignation operator was called!" << std::endl;
    if (this == &other)
        return *this;
    this->parametr = other.parametr;
    return *this;
}


int                Convert::convToChar () {
    int i = 0;
    
    if (this->parametr.length() == 1 && !isdigit(this->parametr[0])) {
        if (this->parametr[0] >= 32 && this->parametr[0] <= 126)
            std::cout << "char: '" << static_cast<char> (this->parametr[0]) << "'" << std::endl;
        else
            std::cout << "char: Not displayable" << std::endl;
    } else if (this->parametr.length() >= 1) {
        if (this->parametr[i] == '-' || this->parametr[i] == '+')
            ++i;
        while (i < this->parametr.length())
            if (!isdigit(this->parametr[i++]))
                return -1;
        i = atoi( this->parametr.c_str());
        if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char> (i) << "'" << std::endl;
        else
            std::cout << "char: Not displayable" << std::endl;
    }
    return 0;
}

int		            Convert::convToInt () {
    int i = 0;

    if (this->parametr.length() == 1) {
        if (isdigit(this->parametr[0])) {
            i = atoi(this->parametr.c_str());
            std::cout << "int: " << i << std::endl;
        }
        else
            std::cout << "int: " << static_cast<int> (this->parametr[0]) << std::endl;
    } else if (this->parametr.length() >= 1) {
        i = 0;
        if (this->parametr[i] == '-' || this->parametr[i] == '+')
            ++i;
        while (i < this->parametr.length())
            if (!isdigit(this->parametr[i++]))
                return -1;
        i = atoi( this->parametr.c_str());
        std::cout << "int: " << i << std::endl;
    }
    return 0;
}

int		            Convert::convToFloat () {
        int i = 0;

    if (this->parametr.length() == 1) {
        if (isdigit(this->parametr[0])) {
            i = atoi(this->parametr.c_str());
            std::cout << "float: " << static_cast<float> (i) << ".0" << std::endl;
        }
        else
            std::cout << "float: " << static_cast<int> (this->parametr[0]) << std::endl;
    } else if (this->parametr.length() >= 1) {
        i = 0;
        if (this->parametr[i] == '-' || this->parametr[i] == '+')
            ++i;
        while (i < this->parametr.length())
            if (!isdigit(this->parametr[i++]))
                return -1;
        i = atoi( this->parametr.c_str());
        std::cout << "float: " << i << std::endl;
    }
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}














std::string         Convert::getParametr () {
    return this->parametr;
}

std::string         Convert::getTypeParametr () {
    return this->typeParametr;
}

void                Convert::setParametr ( char *data ) {
    this->parametr = data;
}

void                Convert::setTypeParametr ( std::string data ) {
    this->typeParametr = data;
}