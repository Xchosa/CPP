/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_object.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:09:28 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 16:13:33 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_OBJECT_HPP
# define FILE_OBJECT_HPP


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdexcept>

#include <cctype>
#include <limits>


class file_object
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
	std::string old_content;
	std::string new_content;
	
public:
	file_object();
	~file_object();
	bool saveFileContent(const std::string& fileName);
	void mainpulateFileContent(std::string& fileName);
};




// read file into string
// read string into file
#endif