/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:18:00 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/28 12:18:46 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human bob;
	
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}