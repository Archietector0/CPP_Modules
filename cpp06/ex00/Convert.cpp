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
	return *this;
}

int				Convert::convToChar ( std::string str ) {
	this->param = str;
	this->type = "char";
	checkingVal();
	return 0;
}

int				Convert::convToInt	( std::string str ) {
	this->param = str;
	this->type = "int";
	checkingVal();
	return 0;
}

void			Convert::ChToCh () {
	std::cout << "char: '" << this->param[0] << "'" << std::endl;
}

void			Convert::IntToCh () {
	int intNum = 0;
	intNum = atoi(this->param.c_str());
	if ( intNum >= 32 && intNum <= 126) {
		std::cout << "char: '" << static_cast<char> (intNum) << "'" << std::endl;
	} else {
		std::cout << "char: Not dispalyable" << std::endl;
	}
}

void			Convert::DoubleToCh() {
	double flNum = 0;

	flNum = atof(this->param.c_str());
	if (static_cast<double>(static_cast<int> (flNum)) < flNum || ((flNum / 10) < 3.2) || ((flNum / 10) > 12.7) )
		std::cout << "char: Not dispalyable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char> (static_cast<int> (flNum)) << "'" << std::endl;
}









void			Convert::ChToInt	() {
	std::cout << "int: " << static_cast<int> (this->param[0]) << std::endl;
}

void			Convert::IntToInt	() {
	int i = 0;
	i = atoi(this->param.c_str());
	std::cout << "int: " << static_cast<int> (i) << std::endl;


}

void			Convert::DoubleToInt	() {
	double flNum = 0;

	flNum = atoi(this->param.c_str());
	std::cout << "int: " << static_cast<int> (flNum) << std::endl;
}






int				Convert::convToFloat( std::string str ) {
	this->param = str;
	this->type = "double";
	checkingVal();
	return 0;
}

void			Convert::ChToDouble	() {
	std::cout << "double: " << static_cast<int> (this->param[0]) << ".0" << std::endl;
}










void			Convert::IntToDouble	() {
	double flNum = 0;

	flNum = atoi(this->param.c_str());
	std::cout << "int: " << static_cast<int> (flNum) << std::endl;

}






int				Convert::checkingVal () {
	int i = 0;
	int flF = 0;
	int flDote = 0;
	int flSign = 0;
	int flTrash = 0;

	// std::cout << isdigit((int)this->param[1])<< std::endl;

	while (i < static_cast<int> (this->param.length())) {
		if (this->param[i] == '.')
			flDote = 1;
		if (this->param[i] == '+' || this->param[i] == '-')
			flSign = 1;
		if ( this->param.length() > 1 && this->param[i] != '.' && this->param[i] != 'f' && !(this->param[i] >= 48 && this->param[i] <= 57))
			{}// flTrash = 1;
		if (this->param[i] == 'f' && this->param.length() > 1)
			flF = 1;
		
		++i;
	}

	i = 0;

	if (flSign) {
		++i;
	}



	// Not work good
	if (flTrash)
		return wrtError("ERROR: Trash found!");
	// --------------




	if (this->type == "char") {
		if (this->param.length() == 1 && !isdigit(this->param[i]))
			ChToCh();
		if (this->param.length() >= 1 && !flDote && isdigit(this->param[i]))
			IntToCh();
		if (this->param.length() >= 2 && flDote)
			DoubleToCh(); // || FloatToCh
	} else if (this->type == "int"){
		if (this->param.length() == 1 && !isdigit(this->param[i]))
			ChToInt();
		if (this->param.length() >= 1 && !flDote && isdigit(this->param[i]))
			IntToInt();
		if (this->param.length() >= 2 && flDote)
			DoubleToInt(); // || FloatToCh
	} else if (this->type == "double") {
		if (this->param.length() == 1 && !isdigit(this->param[i]))
			ChToDouble();
		if (this->param.length() >= 1 && !flDote && isdigit(this->param[i]))
			IntToDouble();




	}






	return 0;

	



}
