/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:56:59 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 09:57:02 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string first;
    first = "HI THIS IS BRAIN";

    // pointer to first
    
    std::string *stringPTR  = &first;

    // reference to string
    std::string &stringREF = first;

    std::cout << "Memory addresses:" << std::endl;
    std::cout << "memory adress of string variable " << std::endl;
    std::cout << &first << "\n" << std::endl;

    std::cout << "memory address held by stringPTR " << std::endl;
    std::cout << stringPTR << "\n" << std::endl; 
    // not &strinPTR ->adress of the pointer variable 
    // not adress is contains

    std::cout << "memory address held by stringREF " << std::endl;
    std::cout << &stringREF << "\n" << std::endl;

    std::cout << "\nValues:" << std::endl;
    std::cout << "value of the string variale " << std::endl;
    std::cout << first << "\n" << std::endl;

    std::cout << "value pointed to by stringPTR" << std::endl;
    std::cout << *stringPTR << "\n" << std::endl;

    std::cout << "value pointed to by stringREF" << std::endl;
    std::cout << stringREF << "\n" << std::endl;


}