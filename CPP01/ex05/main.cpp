/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:04:40 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:04:42 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <limits>

#include "Harl.hpp"



int main()
{
    Harl harlharl;
    harlharl.complain("DEBUG");
    harlharl.complain("INFO");
    harlharl.complain("WARNING");
    harlharl.complain("ERROR");
}



