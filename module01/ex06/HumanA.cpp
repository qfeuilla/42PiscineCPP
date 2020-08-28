/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:54:00 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 15:30:48 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nme, Weapon &weap) : name(nme), weapon(weap) {}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}