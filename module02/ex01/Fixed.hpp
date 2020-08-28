/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:45:21 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 17:02:07 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public :

	Fixed();
	Fixed(Fixed const &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator=(Fixed const &);
	int getRawBits() const;
	void setRawBits(int const);

private :

	int fixed;
	static const int	fractional_bits;
};

std::ostream &operator<<(std::ostream & o, Fixed const & num);


#endif