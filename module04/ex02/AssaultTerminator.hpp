/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:01:53 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/30 14:02:22 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>

#include "Squad.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator(void);
    AssaultTerminator(const AssaultTerminator &);
    ~AssaultTerminator();
    AssaultTerminator   &operator= (const AssaultTerminator &);
    
	virtual void          battleCry(void) const;
    virtual void          meleeAttack(void) const;
    virtual void          rangedAttack(void) const;
    virtual ISpaceMarine  *clone(void) const;
};

#endif