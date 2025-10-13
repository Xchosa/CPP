/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:04:07 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:04:10 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

//Assigns parameter to member variable
Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){
}
// this als pointer zum current object

// same Initialize member in initialization list
// Weapon::Weapon(std::string type) : type(type) {
// }


const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type){
    this->type = type;
}




































