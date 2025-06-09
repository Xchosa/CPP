


#include PHONEBOOK_HPP

int main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	UserInput; // input saved in Userinput

	(void)argv;
	if(argc == 1)
	std::cout << "Crappy phonebook takes no argument" << std::endl;

	if(argc != 1)
	{
		std::cout << "							  /n" << ;
		std::cout << "Welcome to Paul's Phonebook /n" << ;
		std::cout << "							    " << std::endl;
	}
	while(1)
	{
		std::cout << "Type \"ADD\" to add a new User \n" <<;
		std::cout << "Type \"SEARCH\" to search for an existing User \n" <<;
		std::cout << "Type \"EXIT\" to exit the Paul's Phonebook, but be aware! All Data will be lost \n" << std::endl;
		std::getline(std::cin, UserInput)
		checkCinEof()

		else if(UserInput == "ADD")
		{
			phonebook.add_contact();
		}
		else if(UserInput == "SEARCH")
		{
			phoneebook.search_contact();
		}
		else if(UserInput == "Exit"){
			return(0)
		}
		else {
			std::cout << "Wrong Command, only \"ADD" , \"SEARCH\" and \"EXIT\" are valid" << std::endl;
		}
	}

}