/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:47:30 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 14:56:34 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::~Intern() {}

Intern::Intern() {}

Form *Intern::makeForm(std::string nme, int sgngrde, int excgrade)
{
	if (excgrade > 150 || sgngrde > 150)
		throw Form::GradeTooLowException();
	if (sgngrde < 1 || excgrade < 1)
		throw Form::GradeTooHighException();
	
	Form *form = new Form(nme, sgngrde, excgrade);
	return (form);
}

Form *Intern::makeForm(std::string nme, std::string target)
{
	if (!nme.compare("robotomy request"))
		return (new RobotomyRequestForm(target));
	else if (!nme.compare("shrubbery creation"))
		return (new ShrubberyCreationForm(target));
	else if (!nme.compare("presidential pardon"))
		return (new PresidentialPardonForm(target));
	else
		throw Intern::NoExistingForm();
	return (NULL);
}


Intern::NoExistingForm::NoExistingForm() {}

Intern::NoExistingForm::~NoExistingForm() throw(){ }

Intern::NoExistingForm::NoExistingForm(const NoExistingForm &src)
{
	*this = src;
}

const char *Intern::NoExistingForm::what() const throw()
{
    return ("no existing form with this type");
}

Intern::NoExistingForm &Intern::NoExistingForm::operator=(const NoExistingForm &src)
{
    (void)(src);
    return (*this);
}