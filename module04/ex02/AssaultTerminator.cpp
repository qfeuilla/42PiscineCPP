/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:02:32 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 11:22:24 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
    *this = src;
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
    return ;
}

AssaultTerminator
&AssaultTerminator::operator= (const AssaultTerminator &src)
{
    (void)src;
    return (*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
    return ;
}

void
AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return (new AssaultTerminator);
}