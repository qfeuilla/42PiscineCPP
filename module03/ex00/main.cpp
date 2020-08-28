/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:58:29 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 09:39:09 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("R2D2");

    frag.meleeAttack("saitama");
    frag.rangedAttack("saitama");
    frag.takeDamage(50);
    //std::cout << frag.hitPoint << std::endl;
    frag.takeDamage(50);
    std::cout << "Health points: " << frag.hitPoint << std::endl;
    frag.takeDamage(50);
    std::cout << "Health points: " << frag.hitPoint << std::endl;
    frag.beRepaired(50);
    //std::cout << frag.hitPoint << std::endl;
    frag.beRepaired(70);
    std::cout << "Health points: " << frag.hitPoint << std::endl;
    frag.vaulthunter_dot_exe("saitama");
    return (0);
}