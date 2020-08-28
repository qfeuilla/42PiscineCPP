/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:06:15 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:16:06 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent event = ZombieEvent();

	event.setZombieType("giant");
	Zombie *z1 = event.newZombie("tulas");

	z1->announce();
	Zombie *z2 = randomChump("little");
	delete z1;
	delete z2;

	return (0);	
}