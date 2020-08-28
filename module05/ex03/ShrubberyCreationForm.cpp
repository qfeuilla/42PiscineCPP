/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:22:43 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 15:02:52 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string trgt)
{
	target = trgt + "_shrubbery";
	setName("ShrubberyCreationForm");
	setSG(145);
	setEG(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s)
{
	*this = s;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream file;

	if (getIsSigned() == false)
		std::cout << "Error: " << executor.getName() << " cant execute the form " << getName() << " because he isnt signed" << std::endl;
	else
	{
		file.open(target, std::ios::out);
		write_tree(file);
	}
}