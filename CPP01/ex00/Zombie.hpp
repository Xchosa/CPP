/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:55:41 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:18:30 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include <cctype>
#include <limits>


class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);

    ~Zombie(){
        std::cout << this->name << " is destroyed " << std::endl;
    };
    void announce( void ){
       std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
    }

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );




#endif