/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 12:15:49 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 13:46:54 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{	
public :
	Squad();
	Squad(const Squad &);
	~Squad();
	Squad &operator=(const Squad &);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);

private :

	typedef struct		s_container
	{
		ISpaceMarine		*unit;
		struct	s_container	*next;
    }					t_container;
	int		units;
	t_container *squad;

	void copyUnits(const Squad &);
	void destroyUnits();
	bool unitAlreadyIn(ISpaceMarine *marine, t_container *squad);
};

#endif