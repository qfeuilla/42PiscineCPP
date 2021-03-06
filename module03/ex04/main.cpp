/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:58:29 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 10:00:33 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    FragTrap frag("R2D2");
    ScavTrap scav("6PO");
    NinjaTrap ninj("Clumsy ninja");
    SuperTrap sup("saitama");

    scav.challengeNewcomer("orochi");
    frag.meleeAttack("orochi");
    scav.meleeAttack("orochi");
    sup.meleeAttack("orochi");
    frag.rangedAttack("orochi");
    frag.takeDamage(50);
    //std::cout << frag.hitPoint << std::endl;
    frag.takeDamage(100);
    //std::cout << frag.hitPoint << std::endl;
    scav.takeDamage(120);
    //std::cout << frag.hitPoint << std::endl;
    frag.beRepaired(50);
    //std::cout << frag.hitPoint << std::endl;
    scav.beRepaired(70);
    //std::cout << frag.hitPoint << std::endl;
    frag.vaulthunter_dot_exe("orochi");
    sup.vaulthunter_dot_exe("orochi");
    sup.ninjaShoebox(scav);
    ninj.ninjaShoebox(scav);
    ninj.ninjaShoebox(frag);
    ninj.ninjaShoebox(ninj);
    return (0);
}