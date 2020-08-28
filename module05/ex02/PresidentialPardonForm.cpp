/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:22:43 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 15:01:12 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string trgt)
{
	target = trgt;
	setName("RobotomyRequestForm");
	setSG(25);
	setEG(5);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s)
{
	*this = s;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &s)
{
	if (this != &s)
	{
		setName(s.getName());
		setSG(s.getGradeSigned());
		setEG(s.getGradeExec());
		setSigned(s.getIsSigned());
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		std::cout << "Error: " << executor.getName() << " cant execute the form " << getName() << " because he isnt signed" << std::endl;
	else
	{
		std::cout << target << " has been forgiven by Zafod Beeblebrox" << std::endl;
	}
}