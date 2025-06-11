


#include "Contact.hpp"
#include "Phonebook.hpp"

void	checkCinEof();

int main(int argc, char **argv)
{
	PhoneBook	PhoneBook;
	std::string	UserInput; // input saved in Userinput

	(void)argv;
	if(argc == 1)
	std::cout << "Crappy phonebook takes no argument" << std::endl;

	if(argc != 1)
	{
		std::cout << "							  /n" << std::endl;
		std::cout << "Welcome to Paul's Phonebook /n" << std::endl;
		std::cout << "							    " << std::endl;
	}
	while(1)
	{
		std::cout << "Type \"ADD\" to add a new User \n" <<std::endl;
		std::cout << "Type \"SEARCH\" to search for an existing User \n" << std::endl;
		std::cout << "Type \"EXIT\" to exit the Paul's Phonebook, but be aware! All Data will be lost \n" << std::endl;
		std::getline(std::cin, UserInput);
		checkCinEof();

		if(UserInput == "ADD")
		{
			Contact contact;
			Contact new_contact = contact.create_contact();
			PhoneBook.add_contact(new_contact);
		}
		else if(UserInput == "SEARCH")
		{
			PhoneBook.search_Contact();
		}
		else if(UserInput == "EXIT"){
			return(0);
		}
		else {
			std::cout << "Wrong Command, only \"ADD\" , \"SEARCH\" and \"EXIT\" are valid" << std::endl;
		}
	}

}