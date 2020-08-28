/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:12:57 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 13:46:31 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    squad = NULL;
    units = 0;
}

Squad::Squad(const Squad &src)
{
    copyUnits(src);
    units = src.units;
}

Squad::~Squad()
{
	destroyUnits();
}

Squad &Squad::operator=(const Squad &src)
{
	if (this != &src)
	{
		destroyUnits();
		copyUnits(src);
		units = src.units;
	}
	return (*this);
}

int		Squad::getCount() const
{
	return (units);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_container *tmp;

	tmp = squad;
	if (n < 0 || n >= units)
		return (NULL);
	while (n--)
		tmp = tmp->next;
	return (tmp->unit);
}

int				Squad::push(ISpaceMarine *nw)
{
	t_container *tmp;
	
	tmp = squad;
	if (nw != NULL && !unitAlreadyIn(nw, tmp))
	{
		if (squad != NULL)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new t_container;
			tmp->next->unit = nw;
			tmp->next->next = NULL;
		}
		else
		{
			squad = new t_container;
			squad->unit = nw;
			squad->next = NULL;
		}
		units += 1;
	}
	return (units);
}

void	Squad::copyUnits(const Squad &src)
{
	for(int i = 0; i < units; i++)
	{
		push(src.getUnit(i));
	}
}

void	Squad::destroyUnits()
{
	t_container *tmp;

	if (squad)
	{
		delete squad->unit;
		tmp = squad;
		squad = squad->next;
		delete tmp;
		return (destroyUnits());
	}
}

bool Squad::unitAlreadyIn(ISpaceMarine *marine, t_container *sqd)
{
	if (!sqd)
		return (false);
	else if (marine == sqd->unit)
		return (true);
	else
		return (unitAlreadyIn(marine, sqd->next));
	
}