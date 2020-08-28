/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:39:31 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:08:58 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string neight, std::string color, float size, 
			std::string name, int alive) : neight(neight), color(color), 
			size(size), name(name), alive(alive) {}

void	ponyOnTheHeap()
{
	std::string answer = "false";
	Pony *pony = new Pony("breeewwww", "grey", 3.5, "little pony", 1);
	std::cout << "the poney " <<  pony->name << " is " << pony->color << 
			" and his size is : " << pony->size << std::endl;
	while (answer.compare("leave") != 0)
	{
		std::cin >> answer;
		if (answer.compare("kill") == 0 && pony->alive)
		{
			pony->alive = 0;
			std::cout << "hiiiiii" << std::endl;
		}
		if (pony->alive)
			std::cout << pony->neight << std::endl;
	}
	delete pony;
}

void	ponyOnTheStack()
{
	std::string answer = "false";
	Pony pony("breeeewww", "red", 3.5, "little pony", 1);
	std::cout << "the poney " <<  pony.name << " is " << pony.color << 
			" and his size is : " << pony.size << std::endl;
	while (answer.compare("leave") != 0)
	{
		std::cin >> answer;
		if (answer.compare("kill") == 0 && pony.alive)
		{
			pony.alive = 0;
			std::cout << "hiiiiii" << std::endl;
		}
		if (pony.alive)
			std::cout << pony.neight << std::endl;
	}
}
