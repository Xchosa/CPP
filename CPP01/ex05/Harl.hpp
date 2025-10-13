/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:04:32 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:04:34 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <limits>



class Harl
{
private:
    void debug (void);
    void info (void);
    void warning (void);
    void error (void);

public:
    Harl();
    ~Harl();

    void complain( std::string level );
};

#endif


// void Harl::complain( std::string level )
// {
//     void (Harl:: *complain_lvl[4])() =
//     {
//         &Harl::debug,
//         &Harl::info,
//         &Harl::warning,
//         &Harl::error
//     };

//     const char *match_lvl[4] = {
//         "DEBUG",
//         "INFO",
//         "WARNING",
//         "ERROR"
//     };

//     for(int i = 0; i < 4; i++)
//     {
//         if(level == match_lvl[i])
//         {
//             (this->*complain_lvl[i])();
//             return; 
//         }
//     }    
// };