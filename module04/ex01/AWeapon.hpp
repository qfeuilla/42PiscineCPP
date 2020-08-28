/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 21:51:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 12:53:10 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
private :
    std::string name;
    int apcost;
    int damage;

public :
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon();
    virtual ~AWeapon(void);
    AWeapon(AWeapon const &);
    AWeapon &operator=(const AWeapon &);
    std::string const & getName() const;
    int getAPCost() const;
    int getDamage() const;
    void setName(std::string const &);
    void setAPCost(int);
    void setDamage(int);
    virtual void attack() const = 0;
};

#endif
