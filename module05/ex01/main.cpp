/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:08:51 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:48:55 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat *tom = new Bureaucrat("tom", 144);
	Bureaucrat *jim = new Bureaucrat("jim", 42);
	Bureaucrat *joe = new Bureaucrat("joe", 12);
	Form	*form = new Form("NASA form", 15, 45);

	std::cout << *jim;
	std::cout << *tom;
	std::cout << *joe;
	try
	{
		form->beSigned(jim);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form->beSigned(tom);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form->beSigned(joe);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form->beSigned(joe);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete tom;
	delete jim;
	delete joe;
	delete form;
}