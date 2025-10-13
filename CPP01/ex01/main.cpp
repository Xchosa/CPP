/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:55:48 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 09:55:54 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    std::string UserInput;
    int UserInput_nbr;
    std::cout << "Enter Zombie Number: ";
    std::cin >> UserInput_nbr;


    // std::cin.ignore(10000, '\n');    // Clear input buffer
    std::cin.ignore(1, '\n');
    std::cout << "\n--- Creating heap zombie ---\n";

    // Zombie *HeapZombie = newZombie(UserInput);
    // std::cout << UserInput << ": " ;
    // HeapZombie->announce();

    // std::cout << "\n--- Creating stack zombie ---\n";
    // randomChump(UserInput);

   
    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);
    Zombie* ZombieRudel = zombieHorde(UserInput_nbr, UserInput);
    for( int i = 1; i <= UserInput_nbr; i++){
        ZombieRudel[i].announce();
    }
    // delete entire array;
    delete [] ZombieRudel;
    return(0);
}