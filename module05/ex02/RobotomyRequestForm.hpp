/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:49:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 18:29:22 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private :
	std::string target;

public :

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);

	virtual void execute(Bureaucrat const & executor) const;
};

void	write_tree(std::ostream & o);

#endif