/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:21:04 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Ready to kick some a**" << std::endl;
    name = name;
    hitPoint = 100;
    energyPoints = 50;
    level = 1;
    meleeDam = 20;
    rangedDam = 15;
    maxEnergy = 50;
    maxHit = 100;
    armor = 3;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": Time to go" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    std::srand(time(0));
    std::string attacks[5] = {"ice Bucket challeng", "jumping from golden gate", "bottle flip", "head or tail", "Where is Charly"};

    std::cout << name << " Challenge " << target << " on : " << attacks[std::rand() % 5] << std::endl;
}