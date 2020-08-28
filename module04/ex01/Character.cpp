/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 23:43:42 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:34:46 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
    this->name = name;
    this->weap = NULL;
    this->ap = 40;
}

Character::Character() 
{
    this->weap = NULL;
}

Character::~Character() {}

Character::Character(Character const &c)
{
    *this = c;
}

Character &Character::operator=(const Character &c)
{
    this->name = c.getName();
    this->weap = c.weap;
    this->ap = c.ap;
    return (*this);
}

void Character::recoverAP()
{
    if (ap + 10 > 40)
    {
        std::cout << name << " has recover " << -(40 - ap) << " AP" << std::endl;
        ap = 40;
    }
    else
    {
        std::cout << name << " has recover 10 AP" << std::endl;
        ap += 10;
    }
}

void Character::equip(AWeapon *w)
{
    this->weap = w;
	return ;
}

std::string const Character::getName() const
{
    return (name);
}

int Character::getAP(void) const
{
    return (ap);
}

AWeapon *Character::getWeapon(void) const
{
    return (weap);
}

void Character::attack(Enemy *e)
{
    if (!weap)
        std::cout << "You have no Weapon" << std::endl;
    else if (!e)
        std::cout << "No ennemy to atack" << std::endl;
    else
    {
        if (this->ap - weap->getAPCost() > 0)
        {
            e->takeDamage(weap->getDamage());
            this->ap -= weap->getAPCost();
            std::cout << name << " has attack " << e->getType() << " with a " << weap->getName() << std::endl;
            weap->attack();
            if (e->getHP() <= 0)
                delete e;
        }
        else
        {
            std::cout << name << " has no AP to attack " << std::endl;
        }
        
    }
}

std::ostream &operator<< (std::ostream &o, const Character &c)
{
    if (c.getWeapon() != NULL)
    {
        o << c.getName() << " has " << c.getAP() \
            << " AP and wields a " << c.getWeapon()->getName() << std::endl;
    }
    else
    {
        o << c.getName() << " has " << c.getAP() \
            << " AP and is unarmend" << std::endl;
    }
    return (o);
}
