/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:55:34 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 09:55:36 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie* newZombie( std::string name ){
    Zombie* Zombie_new = new Zombie(name); // "new" creates object on heap
    return Zombie_new; // retruns pointer to created Zombie 
    // instance lives beyond the fuction
}

// on the stack, gets destroyed without the destructor needed. 
void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();

    // function ends Instance gets gestroyed -> BY Destructor autometically 
    // if it would be heap -> manually call delete zombie
}