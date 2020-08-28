/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 21:30:05 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 22:27:27 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
public :
	void 	setZombieType(std::string type);

	Zombie	*newZombie(std::string name);

private :
	std::string type;
};

Zombie 		*randomChump(std::string type);

# endif