/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:49:18 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 14:54:23 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Form
{
private :
	std::string name;
	bool isSigned;
	int	 signGrade;
	int	 execGrade;

public :

	class GradeTooLowException : public std::exception
	{
	public :
		GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &src);

        virtual ~GradeTooLowException() throw();

        GradeTooLowException  &operator= (const GradeTooLowException &src);

        virtual const char    *what() const throw();
    };

	class GradeTooHighException : public std::exception
	{
	public :
		GradeTooHighException();
        GradeTooHighException(const GradeTooHighException &src);

        virtual ~GradeTooHighException() throw();

        GradeTooHighException  &operator= (const GradeTooHighException &src);

        virtual const char    *what() const throw();
    };

	Form();
	Form(std::string const &, int, int);
	Form(Form const &);
	virtual ~Form();
	Form &operator=(Form const &);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeSigned() const;
	int getGradeExec() const;
	void setSigned(bool);
	void setName(std::string);
	void setEG(int);
	void setSG(int);
	void beSigned(Bureaucrat const & executor);
	virtual void execute(Bureaucrat const & executor) const ;
};

std::ostream	&operator<<(std::ostream &o, Form const &b);

#endif