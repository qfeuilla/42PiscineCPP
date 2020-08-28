/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 15:34:05 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Let me teach you the ways of magic!" << std::endl;
    hitPoint = 100;
    energyPoints = 100;
    level = 1;
    meleeDam = 30;
    rangedDam = 20;
    armor = 5;
    maxEnergy = 100;
    maxHit = 100;
}

FragTrap::~FragTrap()
{
    std::cout << name << ": Out now" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::srand(time(0));
    std::string attacks[5] = {"Tornado Bullet", "Grenaaaade!", "Falcon Punch!", "Explooooosion !", "omae wa mou shindeiru"};

    if (energyPoints >= 25)
    {
        energyPoints -= 25;
        std::cout << name << " use " << attacks[std::rand() % 5] << " on " << target << std::endl;
    }
    else
        std::cout << "You'r running low on energy" << std::endl;
}
