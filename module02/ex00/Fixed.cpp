/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:45:19 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:38:11 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->fixed = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

const int Fixed::fractional_bits = 8;