/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:40:09 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:37:01 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string nme)
{
    name = nme;
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim() {}


Victim::Victim(const Victim & old)
{
    *this = old;
}

Victim::~Victim()
{
    std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}

std::string Victim::getName()
{
    return (name);
}

std::ostream &operator<<(std::ostream & o, Victim & s)
{
    o << "I am " << s.getName() << ", and i like otters!" << std::endl;
    return o;
}

void    Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}