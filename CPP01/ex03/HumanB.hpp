/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:03:55 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:58 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
        
    public:


    HumanB(std::string name);
    ~HumanB();


    void setWeapon(Weapon &weapon);
    

    Weapon* getWeapon();

    void attack();
};

#endif

