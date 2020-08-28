/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:22:43 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 15:01:26 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string trgt)
{
	target = trgt;
	setName("RobotomyRequestForm");
	setSG(72);
	setEG(45);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &s)
{
	*this = s;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &s)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		std::cout << "Error: " << executor.getName() << " cant execute the form " << getName() << " because he isnt signed" << std::endl;
	else
	{
		std::cout << "* bzzzzzz bzzzzzz *" << std::endl;
		std::cout << target << " has been succesfully robotized" << std::endl;
	}
}