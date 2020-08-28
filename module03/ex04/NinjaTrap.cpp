/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:27:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:21:00 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Let me teach you the ways of magic!" << std::endl;
    name = name;
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
    std::cout << name << " use ninjashoebox on " << adv.getName() << " Of type NinjaTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & adv)
{
    std::cout << name << " use ninjashoebox on " << adv.getName() << " Of type FragTrap" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap & adv)
{
    std::cout << name << " use ninjashoebox on " << adv.getName() << " Of type ScavTrap" << std::endl;
}