/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:05:11 by poverbec          #+#    #+#             */
/*   Updated: 2025/10/13 11:05:15 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Harl harlharl;
        harlharl.complain(argv[1]);
        return 0;
    }
    else
        std::cout << "only give one paramter" << std::endl;
}