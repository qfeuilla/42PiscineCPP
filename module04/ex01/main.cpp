/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 21:31:44 by jaleman           #+#    #+#             */
/*   Updated: 2020/02/10 13:11:55 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() 
{
	/*
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	delete pr;
	delete pf;
	delete me;*/

    Character* moi = new Character("moi");

    Enemy* b = new RadScorpion();
    Enemy* a = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    moi->attack(a);
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->attack(a);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(a);
    moi->attack(a);
    moi->recoverAP();
    moi->attack(a);
    moi->recoverAP();
    moi->attack(a);
    std::cout << *moi;

	delete moi;
	delete pr;
	delete pf;
	return 0;
}