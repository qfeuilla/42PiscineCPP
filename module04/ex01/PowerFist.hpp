/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:09:05 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 12:54:31 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon 
{
public :
    PowerFist();
    PowerFist(PowerFist const &p);
    PowerFist &operator=(const PowerFist &);
    virtual void attack() const;
	~PowerFist(void);
};

#endif