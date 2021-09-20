#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

#include "ClassContact.hpp"
#include <iomanip>

class PhoneBook {
	private:
		Contact     _contacts[8];
	public:
		void        setContact(Contact& contact, int& id);
		Contact     getContact(int& id);
};

#endif
