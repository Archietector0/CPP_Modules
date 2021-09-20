#include "ClassContact.hpp"

// setter methods

void Contact::setFirstName(std::string _firstName) {
	firstName = _firstName;
}

void Contact::setLastName(std::string _lastName) {
	lastName = _lastName;
}

void Contact::setNickName(std::string _nickName) {
	nickName = _nickName;
}

void Contact::setPhoneNumber(std::string _phoneNumber) {
	phoneNumber = _phoneNumber;
}

void Contact::setDarkestSecret(std::string _darkestSecret) {
	darkestSecret = _darkestSecret;
}

// getter methods

std::string Contact::getFirstName() {
	return (firstName);
}

std::string Contact::getLastName() {
	return (lastName);
}

std::string Contact::getNickName() {
	return (nickName);
}

std::string Contact::getPhoneNumber() {
	return (phoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (darkestSecret);
}