/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:20:38 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "ClapTrap Parametric constructor called " << std::endl;
	hitPoint = 100;
	maxHit = 100;
	energyPoints = 50;
	maxEnergy   = 50;
	level = 1;
	meleeDam = 20;
	rangedDam = 15;
	armor = 3;
	return ;
}

std::string ClapTrap::getName(void)
{
    return (this->name);
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << getName() << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-T " << getName() << " attacks " << target << " at range, causing " << rangedDam << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-T " << getName() << " attacks " << target << " at melee, causing " << meleeDam << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint + amount > maxHit)
        hitPoint = maxHit;
    else
        hitPoint += amount;
    std::cout << "Healsies!" << std::endl;
}