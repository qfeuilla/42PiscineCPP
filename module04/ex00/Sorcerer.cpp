/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:40:09 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:32:48 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string nme, std::string tit)
{
    name = nme;
    title = tit;
    std::cout << name << ", " << title << ", is born" << std::endl;
}

Sorcerer::Sorcerer()
{
    name = "Harry";
    title = "POTTER";
    std::cout << name << ", " << title << ", is born" << std::endl;
}

void Sorcerer::polymorph(Victim const &v) const
{
    v.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &p) const
{
    p.getPolymorphed();
}

Sorcerer::Sorcerer(const Sorcerer & old)
{
    *this = old;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName()
{
    return (name);
}

std::string Sorcerer::getTitle()
{
    return (title);
}

std::ostream &operator<<(std::ostream & o, Sorcerer & s)
{
    o << "I am " << s.getName() << ", " << s.getTitle() << ", and i like ponies!" << std::endl;
    return o;
}