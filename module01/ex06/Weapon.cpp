/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:39:43 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 15:25:31 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {}
Weapon::Weapon(void) 
{
	type = "nothing";
}

std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string typ)
{
	this->type = typ;
}