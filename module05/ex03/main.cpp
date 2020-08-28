/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:08:51 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 14:57:12 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{
	Bureaucrat *tom = new Bureaucrat("tom", 130);
	Bureaucrat *jim = new Bureaucrat("jim", 42);
	Bureaucrat *joe = new Bureaucrat("joe", 12);
	Bureaucrat *god = new Bureaucrat("god", 1);
	Intern	someRandomIntern;
	Form	*tree;
	Form	*robot;
	Form	*presidential;
	Form	*test;

	robot = someRandomIntern.makeForm("robotomy request", "Bender");
	tree = someRandomIntern.makeForm("shrubbery creation", "Luck");
	presidential = someRandomIntern.makeForm("presidential pardon", "Mario");
	try {
		test = someRandomIntern.makeForm("cd / |", "rm -rf *");
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << *jim;
	std::cout << *tom;
	std::cout << *joe;
	try
	{
		tom->executeForm(*tree);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		tom->signForm(*tree);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		tom->executeForm(*tree);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		jim->executeForm(*robot);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		jim->signForm(*robot);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		jim->executeForm(*robot);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		joe->executeForm(*presidential);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		joe->signForm(*presidential);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		joe->executeForm(*presidential);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		god->executeForm(*presidential);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	delete tom;
	delete jim;
	delete joe;
	delete god;
	delete tree;
	delete robot;
	delete presidential;
}