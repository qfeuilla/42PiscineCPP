/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:38:45 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 14:55:16 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public :

	class NoExistingForm : public std::exception
	{
	public :
		NoExistingForm();
        NoExistingForm(const NoExistingForm &src);

        virtual ~NoExistingForm() throw();

        NoExistingForm  &operator= (const NoExistingForm &src);

        virtual const char    *what() const throw();
    };

	Intern();
	~Intern();
	Intern &operator=(Intern const &);

	Form *makeForm(std::string, std::string);
	Form *makeForm(std::string, int, int);
};

#endif