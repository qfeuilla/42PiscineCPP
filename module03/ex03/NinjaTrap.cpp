/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:27:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 09:53:07 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Let me teach you the ways of magic!" << std::endl;
    hitPoint = 60;
    energyPoints = 120;
    level = 1;
    meleeDam = 60;
    rangedDam = 5;
    armor = 0;
    maxEnergy = 120;
    maxHit = 60;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << name << ": Out now" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & adv)
{
    std::cout << name << " use ninjashoebox on " << adv.name << " Of type NinjaTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & adv)
{
    std::cout << name << " use ninjashoebox on " << adv.name << " Of type FragTrap" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap & adv)
{
    std::cout << name << " use ninjashoebox on " << adv.name << " Of type ScavTrap" << std::endl;
}