/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:30:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:09:01 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{

public:
	Pony(std::string neight, std::string color, float size, std::string name, int alive);

	std::string neight;
	std::string color;
	float size;
	std::string name;
	int	alive;
};

void	ponyOnTheHeap();
void	ponyOnTheStack();

#endif