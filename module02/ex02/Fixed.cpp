/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:45:19 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:38:46 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::Fixed(Fixed const &fix)
{
	*this = fix;
}

Fixed::Fixed(int const num)
{
    fixed = num << fractional_bits;
}

Fixed::Fixed(float const f)
{
	fixed = roundf(f * (1 << fractional_bits));
}

Fixed::~Fixed()
{
    return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
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

bool			Fixed::operator>(Fixed const & a)
{
	if (this != &a)
		if (fixed > a.getRawBits())
			return true;
	return false;
}

bool			Fixed::operator<(Fixed const & a)
{
	if (this != &a)
		if (fixed < a.getRawBits())
			return true;
	return false;
}

bool			Fixed::operator>=(Fixed const & a)
{
	if (this != &a)
		if (fixed >= a.getRawBits())
			return true;
	return false;
}

bool			Fixed::operator<=(Fixed const & a)
{
	if (this != &a)
		if (fixed <= a.getRawBits())
			return true;
	return false;
}

bool			Fixed::operator==(Fixed const & a)
{
	if (this != &a)
		if (fixed == a.getRawBits())
			return true;
	return false;
}

bool			Fixed::operator!=(Fixed const & a)
{
	if (this != &a)
		if (fixed != a.getRawBits())
			return true;
	return false;
}

Fixed  		Fixed::operator+(Fixed const &a) const
{
	return (Fixed(this->toFloat() + a.toFloat()));	
}

Fixed  		Fixed::operator-(Fixed const &a) const
{
	return (Fixed(this->toFloat() - a.toFloat()));	
}

Fixed  		Fixed::operator*(Fixed const &a) const
{
	return (Fixed(this->toFloat() * a.toFloat()));	
}

Fixed  		Fixed::operator/(Fixed const &a) const
{
	return (Fixed(this->toFloat() / a.toFloat()));	
}

Fixed&		Fixed::operator++()
{
	fixed++;
	return *this;
}

Fixed&		Fixed::operator--()
{
	fixed--;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = *this;
	++*this;
	return tmp;
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this;
	++*this;
	return tmp;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

const int Fixed::fractional_bits = 8;