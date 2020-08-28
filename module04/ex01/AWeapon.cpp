/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 21:57:43 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:34:28 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
	return ;
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(AWeapon const &w)
{
    *this = w;
}

AWeapon &AWeapon::operator=(const AWeapon &w)
{
    this->name = w.getName();
    this->apcost = w.getAPCost();
    this->damage = w.getDamage();
    return (*this);
}

AWeapon::AWeapon(void) { 
	return ;
}

void AWeapon::setName(std::string const &s)
{
    name = s;
}

void AWeapon::setDamage(int d)
{
    damage = d;
}

void AWeapon::setAPCost(int ap)
{
    apcost = ap;
}

std::string const & AWeapon::getName() const
{
    return (name);
}

int AWeapon::getAPCost() const
{
    return (apcost);
}

int AWeapon::getDamage() const
{
    return (damage);
}
