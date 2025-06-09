#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>


// classes

class contact {
	private:
// rst name, last name, nickname, phone number, anddarkest secret
	std:string FirstName;
	std:string LastName;
	std:string NickName;
	std:string	PhoneNumber;
	std:string DarkestSekret;


	public:
	contact();
	~contact(); // destructor
}

class phonebook{
	private:
	contact contacts[8];
	int Contact_Index;


	public:
	phonebook:
	~phonebook;

}

void phonebook:: add_contact()
{
	std::string FirstName = contacts[index].get_first_name();
	std::string LastName = contact[index].get_last_name();

	Contact newContact;
	newContact(firstName,LastName); // to i need a another function?

}

voi phonebook:: seach_contact()
{
	
}

#endif