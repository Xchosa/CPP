/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:03:43 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:50 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL; 
}

HumanB::~HumanB(){
}


// jim.setWeapon(club)
void HumanB::setWeapon( Weapon &weapon){
        this->weapon = &weapon; // store Adress of the passed Weappon in HumanB weapen pointer
    } 



// Weapon* HumanB::getWeapon(){
//         return this->weapon; //  returns pointer zu Weapon ,that HumanB currently hold
// }

// jim.attack();  
void HumanB::attack(){
        std::cout << name << " attacks with their " 
        << weapon->getType() << std::endl;
    }
















































// HumanB::HumanB(std::string name){
//     this->name = name;
// }

// HumanB::~HumanB(){
// }

// void HumanB::setWeapon( Weapon& weapon_type){
//     this->weapon = &weapon_type; // store adress of weapon object to in the object HumanB
// }


// Weapon* HumanB::getWeapon(){
//     return(this->weapon); // calls in the object HumanB, the referece of Weapon Object
//                         //  and returns the pointer to the actual weapon form the Weapon Obect
// }




// void HumanB::attack(){
    

//     std::cout << name << " attacks with their"
//     << this->weapon->getType()      // in the object Weapon - return the string of the Weapon "type"
//     << std::endl;

// }