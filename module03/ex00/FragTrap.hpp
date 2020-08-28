/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:18:11 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:39:56 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public :
    FragTrap(std::string name);
    ~FragTrap();
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

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