#include "ClassPhonebook.hpp"

int    init(Contact& con)
{
	std::string info;

	std::cout << "Please, enter your first name: ";
	std::getline (std::cin, info);
	if (std::cin.eof())
		return -1;
	con.setFirstName(info);

	std::cout << "Please, enter your last name: ";
	std::getline (std::cin, info);
	if (std::cin.eof())
		return -1;
	con.setLastName(info);

	std::cout << "Please, enter your nickname: ";
	std::getline (std::cin, info);
	if (std::cin.eof())
		return -1;
	con.setNickName(info);

	std::cout << "Please, enter your phone number: ";
	std::getline (std::cin, info);
	if (std::cin.eof())
		return -1;
	con.setPhoneNumber(info);

	std::cout << "Please, enter your darkest secret: ";
	std::getline (std::cin, info);
	if (std::cin.eof())
		return -1;
	con.setDarkestSecret(info);

	return 0;
}

std::string		sub_str(const std::string& str) {
	std::string result;

	if (str.length() < 10)
		return str;
	else
		result = str.substr(0, 9);
	return result + '.';
}

void		print_contact(PhoneBook& phonebook, int& id)
{		
	std::cout << "Contact information with id " << (id + 1) << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << phonebook.getContact(id).getFirstName() << std::endl;
	std::cout << phonebook.getContact(id).getLastName() << std::endl;
	std::cout << phonebook.getContact(id).getNickName() << std::endl;
	std::cout << phonebook.getContact(id).getPhoneNumber() << std::endl;
	std::cout << phonebook.getContact(id).getDarkestSecret() << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
}

void        print_info_table(PhoneBook& phonebook, int& id)
{
	int i;

	i = 0;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|-----------------PhoneBook-----------------|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|---Index--|-FistName-|-LastName-|-NickName-|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	while (i < id) {
		std::cout << "|" << std::setw(10) << (i + 1) << "|" 
		<< std::setw(10) << sub_str(phonebook.getContact(i).getFirstName()) << "|"
		<< std::setw(10) << sub_str(phonebook.getContact(i).getLastName()) << "|"
		<< std::setw(10) << sub_str(phonebook.getContact(i).getNickName()) << "|\n";
		std::cout << "+-------------------------------------------+" << std::endl;
		++i;
	}
	std::cout << "Enter id: ";
	std::cin >> i;

	while (std::cin.fail() || i < 1 || i > 8 || i > id) {
		std::cout << "This is not right ID!\n";
		std::cin.clear();
		std::cout << "Enter id: ";
		std::cin.ignore(10000, '\n');
		std::cin >> i;
	}
	print_contact(phonebook, --i);
	std::cin.ignore(10000, '\n');
}

int main()
{
	std::string	command;
	PhoneBook	phonebook;
	Contact		contact;
	int			id;
	int			flag;

	id = 0;
	flag = 0;
	while (1)
	{
		std::cout << "Please, enter command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "EXIT")
			break;
		else if (command == "ADD") {
			if (init(contact))
				break;
			if (id >= 8) {
				std::cout << "List is full!" << std::endl;
				flag = id;
				id = 0;
			}
			phonebook.setContact(contact, id);
			++id;
		} 
		else if (command == "SEARCH")
		{
			if (flag && id > 0)
				print_info_table(phonebook, flag);
			else if (id > 0)
				print_info_table(phonebook, id);
			else
				std::cout << "List is empty!" << std::endl;
		} 
		else
			std::cout << "It isn't the right command." << std::endl;
	}
	return 0;
}