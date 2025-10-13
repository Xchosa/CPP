/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_object.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:59 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 16:13:49 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <file_object.hpp>


file_object::file_object()
{
	std::cout << "File object created"  << std::endl;
};


file_object::~file_object()
{
	std::cout << "File prossed and strings replaced" << std::endl;
};
bool file_object::saveFileContent(const std::string& fileName)
{
	std::ifstream content(fileName.c_str);
	if(!content)
		return false;
	fileName->old_content = content;
	return true;
	
}

void file_object::mainpulateFileContent(std::string& fileName)
{
	std::filebuf* pointer_buffer = ifs.rdbuf();
    std::size_t size = pbuf->
};
