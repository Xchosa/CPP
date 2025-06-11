#include <iostream>
#include <cctype>
#include <limits>
#include <iomanip>
#include <string>

#include "Phonebook.hpp"


// Constructor:

PhoneBook::PhoneBook() : Contact_Index(0){
}

PhoneBook::~PhoneBook(){
}

std::string PhoneBook::ft_truncate(const std::string& output_str)
	{
		if(output_str.length() > 9 )
			return(output_str.substr(0,9) + '.');
		return output_str;
	}


// Method: receiving the object contact and assign it to an private array in phonebook
void PhoneBook::add_contact(const Contact& contact)
{
    if(Contact_Index < MAX_CONTACTS)
    {
        Contacts[Contact_Index] = contact;
        Contact_Index++;
    }
    else
    {
        // change contact[2] to Contact[1] 
        for(int i = 0 ; i < MAX_CONTACTS -1; i++) {
            Contacts[i] = Contacts[i -1];
        }
        // add new Contact at last position
        Contacts[MAX_CONTACTS -1 ] = contact;
        
    }
}

void PhoneBook::display_Contact(int userInput)
{
    //formating
    std::cout << std::left;
    std::cout << std::setfill(' ');// default
    std::cout << "Pauls PhoneBook" << std::endl;
    std::cout << std::setw(10) << "Index" << "|"
            << std:: setw(10) << "First Name" << "|"
            << std:: setw(10) << "Last Name" << "|"
            << std:: setw(10) << "NickName" << "|";
            // << std:: setw(10) << "Phone Nbr" << "|"
            // << std:: setw(10) << "Darkest Secret" << "|"<< "\n" << std::endl;
    
    std::cout << std:: right;
    std::cout << std:: setw(10) << userInput << "|";
    std::cout << std:: setw(10) << ft_truncate(Contacts[userInput].get_FirstName()) << '|';
    std::cout << std:: setw(10) << ft_truncate(Contacts[userInput].get_LastName()) << '|';
    std::cout << std:: setw(10) << ft_truncate(Contacts[userInput].get_NickName()) << '|';
    // std::cout << std:: setw(10) << ft_truncate(Contacts[userInput].get_PhoneNumber()) << '|';
    // std::cout << std:: setw(10) << ft_truncate(Contacts[userInput].get_DarkestSecret()) << '|';
}




void PhoneBook::display_all_contacts()
{
     // display headder 
    std::cout << std::setfill(' ')// actually default
            << std::setw(10) << "Index" << "|"
            << std:: setw(10) << "First Name" << "|"
            << std:: setw(10) << "Last Name" << "|" 
            << std:: setw(10) << "NickName" << "|" << std::endl;
            // << std:: setw(10) << "Phonenumber" << "|"
            // << std:: setw(10) << "Darkest Secret" << "|"<< std::endl;


    for(int i = 0; i < Contact_Index; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std:: setw(10) << ft_truncate(Contacts[i].get_FirstName()) << '|';
        std::cout << std:: setw(10) << ft_truncate(Contacts[i].get_LastName()) << '|';
        std::cout << std:: setw(10) << ft_truncate(Contacts[i].get_NickName()) << '|' << std::endl;
        // std::cout << std:: setw(10) << ft_truncate(Contacts[i].get_PhoneNumber()) << '|';
        // std::cout << std:: setw(10) << ft_truncate(Contacts[i].get_DarkestSecret()) << '|' << std::endl;
    }
}

bool PhoneBook::check_for_content()
{
    if(Contact_Index == 0 )
        return false;
    return true;
}

void PhoneBook::search_Contact(){
    std::string userInput_str;
    int userInput;
    if(check_for_content()== false)
    {
        std::cout << "No, entry, yet. Please ADD a Contact" <<std::endl;
        return;
    }
    // display headder 
    display_all_contacts();
    
    while(1)
    {
        std::cout << "Please enter the Index, of the needed Contact\n";
        std::cout << "Index:   " << std::endl;
        std::cin >> userInput_str;
        if(userInput_str == "EXIT")
        {
            std::cout << "By By, all Contacts will be lost!" << std::endl;
            std::exit(0);
        }

        try {
            userInput = std::stoi(userInput_str);
            if(userInput < 0 || userInput > Contact_Index)
            {
                // std::cin.clear();  // Clear error flags
                throw std::out_of_range("invalid Index ");
            }
            else if(userInput >= 0 || userInput <= Contact_Index)
            {
                display_Contact(userInput);
                return;
            }
            else 
                throw std::runtime_error("Invalid Input");
        }
        catch (const std::exception& e) {
            std::cout << "Error:" << e.what() << std::endl;
            std::cout << "Possible Indexs are: 0-" << Contact_Index -1 <<  "or type EXIT" << std::endl;;
        }
    }
}


