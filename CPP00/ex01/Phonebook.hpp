#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

#include "Contact.hpp"

#include <string>
// classes
#define MAX_CONTACTS 8

class phonebook{
private:
	Contact Contacts[MAX_CONTACTS];
	int Contact_Index;
	

public:
	phonebook();
	~phonebook();

	// only Adress of the Object Contact gets passed not a copy 
	void add_contact(const Contact& Contacts);
	void searchContacts() const;


};



#endif