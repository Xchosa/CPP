




void   checkCinEof() {
        if (std::cin.eof()) {
            std::cin.clear();
			std::cout << "Phonebook closed \n" <<;
            freopen("/dev/tty", "r", stdin);    // to fully reopen stdin
        }
    }


void get_first_name()
{
	std::cout << "Please Type your First Name" << std::endl;
	std::cin >> firstName;
}

void get_last_name()
{
	std::cout << "Please Type your Last Name" << std::endl;
	std::cin >> lastName;
}







void Contact::displayContactInfo() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}