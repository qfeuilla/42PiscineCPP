/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:27:56 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Terminator mode activate" << std::endl;
    maxHit = 100;
    maxHit = 100;
    energyPoints = 120;
    maxEnergy = 120;
    level = 1;
    meleeDam = 60;
    rangedDam = 20;
    armor = 5;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap :" << ": Time to go" << std::endl;
}