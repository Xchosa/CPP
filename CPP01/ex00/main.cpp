/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:55:23 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 09:55:28 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    std::string UserInput;
    Zombie* zombie;

    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);

    std::cout << "\n--- Creating heap zombie ---\n";
    zombie = newZombie(UserInput);
    zombie->announce();

    delete zombie; 

    std::cout << "\n--- Creating stack zombie ---\n";
    randomChump(UserInput);
    // destructor gets called automatically

    return(0);

}