/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:38:53 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : name(name)
{
    std::cout << "Let me teach you the ways of magic!" << std::endl;
    hitPoint = 100;
    energyPoints = 100;
    level = 1;
    meleeDam = 30;
    rangedDam = 20;
    armor = 5;
}

FragTrap::~FragTrap()
{
    std::cout << name << ": Out now" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at range, causing " << rangedDam << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at melee, causing " << meleeDam << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (hitPoint + (int)armor - (int)amount <= 0)
    {
        if (hitPoint != 0)
            std::cout << "You got me!" << std::endl;
        hitPoint = 0;
    }
    else
        hitPoint -= ((int)amount - (int)armor);
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (hitPoint + amount > maxHit)
        hitPoint = maxHit;
    else
        hitPoint += amount;
    std::cout << "Healsies!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::srand(time(0));
    std::string attacks[5] = {"Tornado Bullet", "Grenaaaade!", "Falcon Punch!", "Explooooosion !", "omae wa mou shindeiru"};

    if (energyPoints >= 25)
    {
        energyPoints -= 25;
        std::cout << "FR4G-TP " << name << " use " << attacks[std::rand() % 5] << " on " << target << std::endl;
    }
    else
        std::cout << "You'r running low on energy" << std::endl;
}

const int FragTrap::maxEnergy = 100;
const int FragTrap::maxHit = 100;
