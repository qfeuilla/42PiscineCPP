/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:27:36 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 15:01:57 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (o);
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const & nme, int grde)
{
	if (grde > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grde < 1)
		throw Bureaucrat::GradeTooHighException();
	name = nme;
	grade = grde;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b)
{
	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
	if (this != &b)
	{
		name = b.getName();
		grade = b.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrGrade(int amount)
{
	if (grade - amount < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= amount;
}

void Bureaucrat::decGrade(int amount)
{
	if (grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += amount;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){ }
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("bureaucrat grade is too low...");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("bureaucrat grade is too high...");
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &src)
{
    (void)(src);
    return (*this);
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &src)
{
    (void)(src);
    return (*this);
}

void Bureaucrat::signForm(Form &f)
{
	if (f.getGradeSigned() < grade)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		f.beSigned(*this);
	}
}

void Bureaucrat::executeForm(Form const &f)
{
	if (f.getGradeExec() < grade)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << name << " execute " << f.getName() << std::endl;
		f.execute(*this);
	}
}