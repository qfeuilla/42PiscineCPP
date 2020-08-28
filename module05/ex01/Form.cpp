/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:27:36 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:52:20 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream	&operator<<(std::ostream &o, Form const &f)
{
	o << f.getName() << " need to be executed by grade " << f.getGradeExec() << " bureaucrat and must be sign by a bureaucrate of grade " << f.getGradeSigned() << std::endl;
	return (o);
}

Form::Form() {}

Form::Form(std::string const & nme, int sgngrde, int excgrade)
{
	if (excgrade > 150 || sgngrde > 150)
		throw Form::GradeTooLowException();
	if (sgngrde < 1 || excgrade < 1)
		throw Form::GradeTooHighException();
	name = nme;
	signGrade = sgngrde;
	execGrade = excgrade;
	isSigned = false;
}

Form::Form(Form const &f)
{
	*this = f;
}

Form::~Form() {}

Form &Form::operator=(Form const &f)
{
	if (this != &f)
	{
		name = f.getName();
		signGrade = f.getGradeSigned();
		execGrade = f.getGradeExec();
		isSigned = f.getIsSigned();
	}
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

int	Form::getGradeExec() const
{
	return (execGrade);
}

int	Form::getGradeSigned() const
{
	return (signGrade);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

void Form::setSigned(bool state)
{
	isSigned = state;
}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooLowException::~GradeTooLowException() throw(){}
Form::GradeTooHighException::~GradeTooHighException() throw(){ }
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high...");
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &src)
{
    (void)(src);
    return (*this);
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &src)
{
    (void)(src);
    return (*this);
}

void Form::beSigned(Bureaucrat *b)
{
	if (b->signForm(name, isSigned, signGrade))
		isSigned = true;
	if (b->getGrade() > signGrade)
		throw Form::GradeTooLowException();
}