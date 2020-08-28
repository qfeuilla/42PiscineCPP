/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:54:00 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/28 14:20:06 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nme) : name(nme)
{
	name = nme;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
	weapon = &weap;
}