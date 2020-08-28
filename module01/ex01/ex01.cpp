/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:08:49 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 11:26:21 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ex01.hpp"

void memoryLeak()
{
	std::string *panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}