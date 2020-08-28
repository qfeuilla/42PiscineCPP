/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:14:10 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:35:38 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") 
{ 
    std::cout <<  "Gaaah. Break everything !" << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    int tmp = getHP();

    amount = amount < 3 ? 0 : amount - 3;
    if (tmp - amount < 0)
        setHP(0);
    else
        setHP(tmp - amount);
}

SuperMutant::SuperMutant(SuperMutant const &p)
{
    *this = p;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &p)
{
    setHP(p.getHP());
    setType(p.getType());
    return (*this);
}

SuperMutant::~SuperMutant() 
{
    std::cout << "Aaargh ..." << std::endl;
}
