/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:18:11 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 14:51:33 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public :
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int hitPoint;
    int maxHit;
    int energyPoints;
    int maxEnergy;
    unsigned int level;
    std::string name;
    unsigned int meleeDam;
    unsigned int rangedDam;
    unsigned int armor;
};

#endif