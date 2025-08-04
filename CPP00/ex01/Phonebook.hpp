/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:34:36 by poverbec          #+#    #+#             */
/*   Updated: 2025/08/04 09:34:37 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <exception>
#include <regex>

#include "Contact.hpp"


// classes
#define MAX_CONTACTS 8

class PhoneBook{
private:
	// each Contacts[0] elment is a complete Contact object with all the members firstName, lastname etc
	Contact Contacts[MAX_CONTACTS];
	int Contact_Index;
	std::string ft_truncate(const std::string& output_str);
	bool check_for_content();

public:
	PhoneBook();
	~PhoneBook();

	// only Adress of the Object Contact gets passed not a copy 
	void add_contact(const Contact& Contacts);
	void search_Contact();
	void display_Contact(int userInput);
	void display_all_contacts();
	

};



#endif


