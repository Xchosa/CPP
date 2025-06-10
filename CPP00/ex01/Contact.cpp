
#include <string>
#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void   checkCinEof() {
        if (std::cin.eof()) {
            std::cin.clear();
			std::cout << "Phonebook closed \n" << std::endl;
            freopen("/dev/tty", "r", stdin);    // to fully reopen stdin
        }
    }



Contact Contact::create_contact(){
    std::cout << "Please enter the contact's information, starting with\n";

    std::string request_User_Input;
    std::string tmp_contact_data[5];
    int i = 0;
    while(i < 5){
        switch(i){
            case(0): request_User_Input = "first name"; break;
            case(1): request_User_Input = "last name"; break;
            case(2): request_User_Input = "nickname"; break;
            case(3): request_User_Input = "Phonenumber"; break;
            case(4): request_User_Input = "Darkest Secret"; break;
        }
        std::cout << request_User_Input;
        std::getline(std::cin, tmp_contact_data[i]);
        checkCinEof();
        // if (i == 3) // limit to number and + 
        if(tmp_contact_data[i] == "")
        {
            std::cout << "Please provide needed informations, empty lines are not allowed" << std::endl;
            i--;
        }
        i++;
    }
    Contact new_contact;
    new_contact.set_FirstName(tmp_contact_data[0]);
    new_contact.set_LastName(tmp_contact_data[1]);
    new_contact.set_Nickname(tmp_contact_data[2]);
    new_contact.set_PhoneNumber(tmp_contact_data[3]);
    new_contact.set_DarkestSecret(tmp_contact_data[4]);
    return new_contact;
}
// std:: string firstName;
// 	std:: string lastName;
// 	std:: string nickName;
// 	std:: string phoneNumber;
// 	std:: string darkestSecret;


	// void	set_LastName(const std::string& l_name);
	// void	set_Nickname(const std::string& n_name);
	// void	set_PhoneNumber(const std::string& phone_nbr);
	// void	set_DarkestSecret(const std::string& d_secret);


void Contact::set_FirstName(const std::string& f_name){
    firstName = f_name;
}



std::string Contact::get_FirstName() const {
    return firstName;
}
std::string Contact::get_LastName() const {
    return lastName;
}

std::string Contact::get_NickName() const{
    return nickName;
}

std::string Contact::get_PhoneNumber()const{
    return phoneNumber;
}

std::string Contact::get_DarkestSecret()const{
    return darkestSecret;
}