/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:15:40 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 15:08:44 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
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

	Bureaucrat();
	Bureaucrat(std::string const &, int);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &);

	std::string const getName() const;
	int	getGrade() const;
	void incrGrade(int);
	void decGrade(int);

private :
	int grade;
	std::string name;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif