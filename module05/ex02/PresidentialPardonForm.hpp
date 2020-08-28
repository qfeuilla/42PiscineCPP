/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:49:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 18:26:36 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private :
	std::string target;

public :

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &);

	virtual void execute(Bureaucrat const & executor) const;
};

void	write_tree(std::ostream & o);

#endif