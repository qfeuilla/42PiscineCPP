/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 21:35:55 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:17:25 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string typ)
{
	type = typ;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, type);
	return (zombie);
}

Zombie *randomChump(std::string type)
{
	std::srand(time(0));
	std::string NameArray[10] = {"Trevor", "Molloy", "Armand", "Jones", 
		"Riley", "Riley", "Abomination", "Renee", "Amarillo", "Neil" };
	Zombie *zombie = new Zombie(NameArray[std::rand() % 10], type);
	zombie->announce();
	return (zombie);
}