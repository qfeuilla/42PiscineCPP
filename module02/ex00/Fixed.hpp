/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:45:21 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 16:20:52 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public :

	Fixed();
	Fixed(Fixed const &);
	~Fixed();
	Fixed& operator=(Fixed const &);
	int getRawBits() const;
	void setRawBits(int const);

private :

	int 				fixed;
	static const int	fractional_bits;
};

#endif