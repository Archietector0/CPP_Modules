#include "iostream"

struct		Data {
	std::string someStr;
};



intptr_t	serialize(Data* ptr) {
	return reinterpret_cast<intptr_t> (ptr);
}

Data		*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *> (raw);
}


int			main () {

	Data *data = new Data;
	data->someStr = "It's a result!";
	
	intptr_t res = serialize(data);
	std::cout << "Byte view: " << res << std::endl;


	Data *newStr = new Data;

	newStr = deserialize(res);
	std::cout << newStr->someStr << std::endl;

	return 0;
}