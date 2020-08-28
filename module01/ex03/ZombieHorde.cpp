/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:28:47 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:21:09 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : N(n)
{
	int rad;
    int j;
    std::string zomName[4] = {"Timmy", "Persant", "Jim", "Ana"};
    std::string zomType[4] = {"Stalker", "Runner", "Walker", "Giant"};
    store = new Zombie *[n];
    
    j = 0;
    while (j < n)
    {
        rad = rand() % 4;
		store[j] = new Zombie(zomName[rad], zomType[rad]);
        j++;
    }
}

ZombieHorde::~ZombieHorde() 
{
    int j;

    j = 0;
    while(j < N)
        delete store[j++];
	delete store;
    return ;
}

void	ZombieHorde::announce()
{
	int j;

    j = 0;
    while(j < N)
        store[j++]->announce();
    return ;
}