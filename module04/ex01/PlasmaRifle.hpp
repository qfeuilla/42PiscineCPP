/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:09:05 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 12:56:33 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon 
{
public :
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &);
    PlasmaRifle &operator=(const PlasmaRifle &);
    virtual void attack() const;
	~PlasmaRifle(void);
};

#endif