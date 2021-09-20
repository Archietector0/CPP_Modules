#include "ClassPhonebook.hpp"

void        PhoneBook::setContact(Contact& contact, int& id) {
	_contacts[id] = contact;
}

Contact     PhoneBook::getContact(int& id) {
	return _contacts[id];
}