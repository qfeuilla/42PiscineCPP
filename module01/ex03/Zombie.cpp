/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 21:23:56 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:19:08 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {}

void Zombie::announce()
{
	std::srand(time(0));
	std::srand(std::rand());
	std::string ans[4] = {"I need brain", "brraaaaiiiinnn", 
						"give me brraaaaiiiinnn", "ahhahaahh"};
	std::cout << "<" << name << " " << "(" << type << ")" << "> ";
	int i = std::rand();
	std::cout << ans[i % 4] << std::endl;
}