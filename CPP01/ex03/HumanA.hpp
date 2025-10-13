/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:03:36 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:39 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon_type; // stroe a reference to Weapon

    public:


    HumanA(std::string name, Weapon& weapon_type);
    ~HumanA();

    void attack();
};

#endif