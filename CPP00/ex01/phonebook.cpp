#include <iostream>
#include <cctype>


#include phonebook.hpp


// Constructor:
Contact::Contact(){
std::cout << "Constructor Contacts called" << std::endl;
}
// deconstructor
Contact::~Contact(){
std::cout << "Deconstuctor Contacts called" << std::endl;
}


void desplayContacts()
