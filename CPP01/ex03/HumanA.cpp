/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:03:30 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:31 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

// accept a reference to the weapon object
// HumanA::HumanA(std::string name, Weapon& weapon_type) {
//     this->name = name;
//     this->weapon_type = weapon_type;
// };
HumanA::HumanA(std::string name, Weapon& weapon_type) : name(name) , weapon_type(weapon_type){
};

HumanA::~HumanA(){
}


void HumanA::attack(){
    
    std::cout << name << " attacks with their "
    << this->weapon_type.getType() << std::endl;
}