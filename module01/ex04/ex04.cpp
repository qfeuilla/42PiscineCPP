/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:53:38 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:25:36 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*p = &str;
	std::string	&s = str;

	std::cout << s << std::endl;
	std::cout << *p << std::endl;
	return (0);
}