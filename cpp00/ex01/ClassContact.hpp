#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:

		// setter methods
		void        setFirstName(std::string _firstName);
		void        setLastName(std::string _lastName);
		void        setNickName(std::string _nickName);
		void        setPhoneNumber(std::string _phoneNumber);
		void        setDarkestSecret(std::string _darkestSecret);

		// getter methods
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

#endif