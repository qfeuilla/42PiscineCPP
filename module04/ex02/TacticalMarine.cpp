/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:57:57 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 14:07:44 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action!" << std::endl;	
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
    *this = src;
    std::cout << "Tactical Marine ready for action!" << std::endl;
    return ;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

TacticalMarine &TacticalMarine::operator= (const TacticalMarine &src)
{
	(void)src;
	return (*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT!" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
    return ;
}

ISpaceMarine *TacticalMarine::clone() const
{
    return (new TacticalMarine);
}