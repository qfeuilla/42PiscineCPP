/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:21:12 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 22:48:55 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public :
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();

private :
	Zombie **store;
	int		N;
};

#endif