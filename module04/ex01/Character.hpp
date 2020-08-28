/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 23:32:24 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:07:27 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private :
    std::string name;
    AWeapon *weap;
    int     ap;

public :
    Character(std::string const & name);
    Character();
    ~Character();
    Character(Character const &);
    Character &operator=(const Character &);
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    int getAP(void) const;
    AWeapon *getWeapon(void) const;
    std::string const getName() const;
};

std::ostream                &operator<< (std::ostream &o, const Character &rhs);

#endif
