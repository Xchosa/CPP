#include <iostream>
#include <cctype>


#include "Phonebook.hpp"


// Constructor:

phonebook::phonebook() : Contact_Index(0){
}

phonebook::~phonebook(){
}

// Method declaration Contact(Class) works with contact objects
void phonebook::add_contact(const Contact& contact)
{
    if(Contact_Index < MAX_CONTACTS)
    {
        Contacts[Contact_Index] = contact;
        Contact_Index++;
    }
    else
    {
        for(int i = 0 ; i < MAX_CONTACTS -1; i++) {
            Contacts[i] = Contacts[i -1];
        }
        Contacts[MAX_CONTACTS -1 ] = contact;
        
    }
}

void phonebook:: searchContacts() const{

}
