/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:49:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 18:29:20 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private :
	std::string target;

public :

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

	virtual void execute(Bureaucrat const & executor) const;
};

void	write_tree(std::ostream & o);

#endif