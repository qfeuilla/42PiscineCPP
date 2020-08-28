/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:14:10 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:35:25 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") 
{ 
    std::cout << "* click click click *" << std::endl;
}

void RadScorpion::takeDamage(int amount)
{
    int tmp = getHP();

    amount = amount < 3 ? 0 : amount - 3;
    if (tmp - amount < 0)
        setHP(0);
    else
        setHP(tmp - amount);
}

RadScorpion::RadScorpion(RadScorpion const &p)
{
    *this = p;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &p)
{
    setHP(p.getHP());
    setType(p.getType());
    return (*this);
}

RadScorpion::~RadScorpion() 
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}
