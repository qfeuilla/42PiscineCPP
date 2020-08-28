/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:31:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 09:51:42 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << name << " ClapTrap Parametric constructor called " << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " ClapTrap destructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at range, causing " << rangedDam << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-T " << name << " attacks " << target << " at melee, causing " << meleeDam << " points of damage !" << std::endl;
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