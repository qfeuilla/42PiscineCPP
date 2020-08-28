/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:14:10 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:35:04 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { 
	return ;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &p)
{
    *this = p;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &p)
{
    setName(p.getName());
    setDamage(p.getDamage());
    setAPCost(p.getAPCost());
    return (*this);
}

PlasmaRifle::~PlasmaRifle(void)
{
    return ;
}