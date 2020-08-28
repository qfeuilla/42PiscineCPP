/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:45:19 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:38:30 by qfeuilla         ###   ########.fr       */
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

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    fixed = num << fractional_bits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed = roundf(f * (1 << fractional_bits));
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
	return (this->fixed);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixed = raw;
}

float  Fixed::toFloat() const
{
	return (((float)fixed / (1 << fractional_bits)));
}

int  Fixed::toInt() const
{
	return ((fixed / (1 << fractional_bits)));
}

std::ostream	&operator<<(std::ostream & o, Fixed const & num)
{
	o << num.toFloat();
	return (o);
}

const int Fixed::fractional_bits = 8;