/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:03:22 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/08/09 15:49:02 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string out(&av[1][0], &av[ac - 1][strlen(av[ac - 1])] + 1);
		std::transform(out.begin(), out.end(), out.begin(), ::toupper);
		std::cout << out  << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}