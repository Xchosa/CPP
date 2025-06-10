#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
private:
// irst name, last name, nickname, phone number, anddarkest secret
	std:: string firstName;
	std:: string lastName;
	std:: string nickName;
	std:: string phoneNumber;
	std:: string darkestSecret;


	public:
	Contact();
	~Contact(); // destructor

	//Setters
    void    set_FirstName(const std::string& f_Name);
	void	set_LastName(const std::string& l_name);
	void	set_Nickname(const std::string& n_name);
	void	set_PhoneNumber(const std::string& phone_nbr);
	void	set_DarkestSecret(const std::string& d_secret);

	//Getters
	std::string get_FirstName() const;
	std::string get_LastName() const;
	std::string get_NickName() const;
	std::string get_PhoneNumber() const;
	std::string get_DarkestSecret() const;
//  The const guarantees we won't accidentally modify the contact data


	// Encapsulation
	// 	Bundles related data and methods together in a class
	// Controls access to that data through well-defined interfaces
	// Hides internal implementation details
    static Contact create_contact(); // static method declaration that belongs to Contact class

	//Utility methods
	bool valid_phoneNumber();
	

};

# endif