/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:41:30 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:18:28 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main()
{
    srand(time(NULL));
    ZombieHorde *zombie = new ZombieHorde(20);
    zombie->announce();
	delete zombie;

    return (0);
}