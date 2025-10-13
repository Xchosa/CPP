/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:04:20 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:04:22 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include <cctype>
#include <limits>

class Weapon
{
    private:
        std::string type;
        

    public:

        Weapon(std::string type);
        ~Weapon();



        const std::string& getType() const;

        void setType(std::string type);

};  


#endif