/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:05:05 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:05:07 by poverbec         ###   ########.fr       */
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

