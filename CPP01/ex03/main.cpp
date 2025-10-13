/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:04:01 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:04:03 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#include <cctype>
#include <limits>


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of clube");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");            // Jim created without weapon
    
        jim.setWeapon(club);           // Jim gets pointer to club
        jim.attack();                  // Uses club's getType()
        club.setType("other club");    // Change club type
        jim.attack();                  // Shows new club type
    }
    return 0;
}


// In which case do you think it would be best to use a pointer to
// Weapon? 
// And a reference to Weapon? 
// Why? Think about it before
// starting this exercise.