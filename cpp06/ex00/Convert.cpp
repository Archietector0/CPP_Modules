#include "Convert.hpp"

Convert::Convert	() {}

Convert::~Convert	() {}

Convert::Convert ( const Convert &other ) {
	operator = (other);
}

Convert			&Convert::operator = ( const Convert &other ) {
	if (this == &other)
		return *this;
	this->param = other.param;
	this->type = other.type;
	return *this;
}

int				Convert::convToChar ( std::string str ) {
	this->param = str;
	this->type = "char";
	if (checkLimits()) {
		std::cout << this->type << ": impossible. Overflow." << std::endl;
		return 1;
	}
	checkingVal();
	return 0;
}

int				Convert::convToInt	( std::string str ) {
	this->param = str;
	this->type = "int";
	if (checkLimits()) {
		std::cout << this->type << ": impossible. Overflow." << std::endl;
		return 1;
	}
	checkingVal();
	return 0;
}

int				Convert::convToFloat( std::string str ) {
	this->param = str;
	this->type = "float";
	if (checkLimits()) {
		std::cout << this->type << ": impossible. Overflow." << std::endl;
		return 1;
	}
	checkingVal();
	return 0;
}


int				Convert::convToDouble( std::string str ) {
	this->param = str;
	this->type = "double";
	if (checkLimits()) {
		std::cout << this->type << ": impossible. Overflow." << std::endl;
		return 1;
	}
	checkingVal();
	return 0;
}

void			Convert::ChToCh () {
	if (this->type == "char")
		std::cout << this->type << ": '" << this->param[0] << "'" << std::endl;
	if (this->type == "int")
		std::cout << this->type << ": " << static_cast<int> (this->param[0]) << std::endl;
	if (this->type == "float")
		std::cout << this->type << ": " << static_cast<int> (this->param[0]) << ".0f" << std::endl;
	if (this->type == "double")
		std::cout << this->type << ": " << static_cast<int> (this->param[0]) << ".0" << std::endl;
}

void			Convert::IntToCh () {
	int intNum = 0;

	if (this->type == "char") {
		intNum = atoi(this->param.c_str());
		if ( intNum >= 32 && intNum <= 126) {
			std::cout << this->type << ": '" << static_cast<char> (intNum) << "'" << std::endl;
		} else {
			std::cout << this->type <<": Not dispalyable" << std::endl;
		}
	}

	if (this->type == "int") {
		// int i = 0;
		intNum = atoi(this->param.c_str());
		std::cout << this->type << ": " << static_cast<int> (intNum) << std::endl;
	}

	if (this->type == "float") {
		double flNum = 0;

		flNum = atoi(this->param.c_str());
		std::cout << this->type << ": " << static_cast<int> (flNum) << ".0f" << std::endl;
	}

	if (this->type == "double") {
		double flNum = 0;

		flNum = atoi(this->param.c_str());
		std::cout << this->type << ": " << static_cast<int> (flNum) << ".0" << std::endl;
	}
}

void			Convert::DoubleToCh() {
	double flNum = 0;

	if (this->type == "char") {
		flNum = atof(this->param.c_str());
		if (static_cast<double>(static_cast<int> (flNum)) < flNum || ((flNum / 10) < 3.2) || ((flNum / 10) > 12.7) )
			std::cout << this->type << ": Not dispalyable" << std::endl;
		else
			std::cout << this->type << ": '" << static_cast<char> (static_cast<int> (flNum)) << "'" << std::endl;
		// return 0;
	}

	if (this->type == "int") {
		if (this->type == "int") {
			int i = 0;
			i = atoi(this->param.c_str());
			std::cout << this->type << ": " << static_cast<int> (i) << std::endl;
		}
	}

	if (this->type == "float") {
		flNum = atof(this->param.c_str());
		if (static_cast<float>(static_cast<int> (flNum)) < flNum)
			std::cout << this->type << ": " << flNum << "f" << std::endl;
		else
			std::cout << this->type << ": " << flNum << ".0f" << std::endl;
	}

	if (this->type == "double") {
		flNum = atof(this->param.c_str());
		if (static_cast<double>(static_cast<int> (flNum)) < flNum)
			std::cout << this->type << ": " << flNum << std::endl;
		else
			std::cout << this->type << ": " << flNum << ".0" << std::endl;
	}
}

int				Convert::checkLimits	() {
	long int val = atol(this->param.c_str());
	if (!(val >= INT_MIN && val <= INT_MAX))
		return 1;
	return 0;
}


int				Convert::checkingVal	() {
	int i = 0;
	int flF = 0;
	int flDote = 0;
	int flSign = 0;
	int flTrash = 0;

	if (this->param == "+inf" || this->param == "-inf" || this->param == "inf" ||
		this->param == "+inff" || this->param == "+inff" || this->param == "inff" ||
		this->param == "+nan" || this->param == "-nan" || this->param == "nan" ||
		this->param == "+nanf" || this->param == "-nanf" || this->param == "nanf") {
			if (this->type == "char" || this->type == "int") {
				std::cout << this->type << ": impossible" << std::endl;
			} else if (this->type == "float") {
				std::cout << this->type << ": nanf" << std::endl;
			} else if (this->type == "double") {
				std::cout << this->type << ": nan" << std::endl;
			}
			return 0;
		}

	while (i < static_cast<int> (this->param.length())) {
		if (this->param[i] == '.')
			flDote = 1;
		if (this->param[i] == '+' || this->param[i] == '-')
			flSign = 1;
		if ( this->param.length() > 1 && ( (this->param[i] >= 32 && this->param[i] <= 42) || 
			this->param[i] == 44 ||
			this->param[i] == 47 || 
			(this->param[i] >= 58 && this->param[i] <= 101) || 
			(this->param[i] >= 103 && this->param[i] <= 126))) {
			flTrash += 1;
			// return 0;
		}	
		if (this->param[i] == 'f' && this->param.length() >= 4 && flDote )
			flF = 1;
		
		++i;
	}

	// Not work good
	if (flTrash)
		return wrtError("ERROR: Trash found!");
	// --------------

	i = 0;

	if (flSign)
		++i;

	if (this->param.length() == 1 && !isdigit(this->param[i]))
		ChToCh();
	if (this->param.length() >= 1 && !flDote && isdigit(this->param[i]))
		IntToCh();
	if (this->param.length() >= 3 && flDote && (flF || !flF))
		DoubleToCh();





	return 0;
}
