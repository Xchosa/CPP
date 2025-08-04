/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:33:19 by poverbec          #+#    #+#             */
/*   Updated: 2025/08/04 09:33:25 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"


Contact::Contact() {
}

Contact::~Contact() {
}

void signal_handler(int signum )
{
    (void)signum;
    std::cout << "Signal catched, use EXIT to quit\n" << std::endl;
}

void   checkCinEof()
{
    signal(SIGINT, signal_handler);
    signal(SIGTSTP, signal_handler);
    if (std::cin.eof()) 
    {
        std::cin.clear();
		std::cout << "Use Exit to quit properly\n" << std::endl;
        freopen("/dev/tty", "r", stdin);    // to fully reopen stdin
    }
    }


// return type
    // Class scope 
                // Function name
Contact Contact::create_contact(){
    std::cout << "Please enter the contact's information, starting with\n";

    std::string request_User_Input;
    std::string tmp_contact_data[5];
    int i = 0;
    while(i < 5){
        switch(i){
            case(0): request_User_Input = "First Name: "; break;
            case(1): request_User_Input = "Last name: "; break;
            case(2): request_User_Input = "Nickname: "; break;
            case(3): request_User_Input = "Phonenumber: "; break;
            case(4): request_User_Input = "Darkest Secret: "; break;
        }
        std::cout << request_User_Input;
        std::getline(std::cin, tmp_contact_data[i]);
        if(tmp_contact_data[i] == "EXIT")
		{
            std::cout << "By By, all Contacts will be lost!" << std::endl;
            std::exit(0);
        }
        checkCinEof();
        // if (i == 3) // limit to number and + 
        if(tmp_contact_data[i] == "")
        {
            std::cout << "Please provide needed informations, empty lines are not allowed" << std::endl;
            i--;
        }
        if(i == 3)
        {
            if(only_allow_digits(tmp_contact_data[i]) == false)
            {
                std::cout << "Error, only digits are allowed" << std::endl;
                continue;
            }
        }
        i++;
    }
    Contact new_contact;
    new_contact.set_FirstName(tmp_contact_data[0]);
    new_contact.set_LastName(tmp_contact_data[1]);
    new_contact.set_NickName(tmp_contact_data[2]);
    new_contact.set_PhoneNumber(tmp_contact_data[3]);
    new_contact.set_DarkestSecret(tmp_contact_data[4]);
    return new_contact;
}

bool Contact::only_allow_digits(const std::string& phoneNbr)
{
    if(phoneNbr.empty())
        return false;

    size_t phone_prefix = 0;
    if(phoneNbr[0] == '+')
        phone_prefix = 1;

    for(size_t i = phone_prefix; i < phoneNbr.length(); i++ )
    {
        if(std::isdigit(phoneNbr[i]) == false)
            return false;
    }
    return true;
} 
// void	set_DarkestSecret(const std::string& d_secret);

// Pass by const reference 
void Contact::set_FirstName(const std::string& f_name){
    firstName = f_name;
}

void Contact::set_LastName(const std::string& l_name){
    lastName = l_name;
}

void Contact::set_NickName(const std::string& n_name){
    nickName = n_name;
}

void Contact::set_PhoneNumber(const std::string& phone_nbr) {
    phoneNumber = phone_nbr;
}

void Contact::set_DarkestSecret(const std::string& d_secret) {
    darkestSecret = d_secret;
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