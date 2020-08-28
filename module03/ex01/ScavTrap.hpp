/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:18:11 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 14:17:29 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
public :
    ScavTrap(std::string name);
    ~ScavTrap();
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const & target);

    int hitPoint;
    static const int maxHit;
    int energyPoints;
    static const int maxEnergy;
    unsigned int level;
    std::string name;
    unsigned int meleeDam;
    unsigned int rangedDam;
    unsigned int armor;
};

#endif