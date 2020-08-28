/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:14:10 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:35:12 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { }

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}

PowerFist::PowerFist(PowerFist const &p)
{
    *this = p;
}

PowerFist &PowerFist::operator=(const PowerFist &p)
{
    setName(p.getName());
    setDamage(p.getDamage());
    setAPCost(p.getAPCost());
    return (*this);
}

PowerFist::~PowerFist(void)
{
    return ;
}
