/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:08:51 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:44:21 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat *jim = new Bureaucrat("jim", 42);

	std::cout << *jim;
	jim->incrGrade(10);
	std::cout << *jim;
	try
	{
		jim->incrGrade(100);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *jim;
	try
	{
		jim->decGrade(150);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *jim;
	jim->decGrade(10);
	std::cout << *jim;

	delete jim;
}