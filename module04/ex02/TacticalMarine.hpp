/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:47:15 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 14:00:41 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "Squad.hpp"

class TacticalMarine : public ISpaceMarine
{
public :
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &);
	virtual void          battleCry(void) const;
    virtual void          meleeAttack(void) const;
    virtual void          rangedAttack(void) const;
    virtual ISpaceMarine  *clone(void) const;
};

#endif