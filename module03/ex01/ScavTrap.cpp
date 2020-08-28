/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 09:44:25 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : name(name)
{
    std::cout << "Ready to kick some a**" << std::endl;
    hitPoint = 100;
    energyPoints = 50;
    level = 1;
    meleeDam = 20;
    rangedDam = 15;
    armor = 3;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": Time to go" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at range, causing " << rangedDam << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at melee, causing " << meleeDam << " points of damage !" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (hitPoint + (int)armor - (int)amount <= 0)
    {
        if (hitPoint != 0)
            std::cout << "i'm leaving now" << std::endl;
        hitPoint = 0;
    }
    else
        hitPoint -= ((int)amount - (int)armor);
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (hitPoint + amount > maxHit)
        hitPoint = maxHit;
    else
        hitPoint += amount;
    std::cout << "Heal Yeah !" << std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    std::srand(time(0));
    std::string challenge[5] = {"ice Bucket challenge", "jumping from golden gate", "bottle flip", "head or tail", "Where is Charly"};
    
    std::cout << name << " Challenge " << target << " on : " << challenge[std::rand() % 5] << std::endl;
}

const int ScavTrap::maxEnergy = 50;
const int ScavTrap::maxHit = 100;
