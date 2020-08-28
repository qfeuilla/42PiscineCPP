/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:58:29 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 09:48:17 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap frag("R2D2");
    ScavTrap scav("6PO");

    scav.challengeNewcomer("saitama");
    frag.meleeAttack("saitama");
    scav.meleeAttack("saitama");
    frag.rangedAttack("saitama");
    frag.takeDamage(50);
    std::cout << "Health points frag: "  << frag.hitPoint << std::endl;
    frag.takeDamage(100);
    std::cout << "Health points frag: "  << frag.hitPoint << std::endl;
    scav.takeDamage(120);
    std::cout << "Health points scav: "  << scav.hitPoint << std::endl;
    frag.beRepaired(50);
    std::cout << "Health points frag: "  << frag.hitPoint << std::endl;
    scav.beRepaired(70);
    std::cout << "Health points scav: "  << scav.hitPoint << std::endl;
    frag.vaulthunter_dot_exe("saitama");
    return (0);
}