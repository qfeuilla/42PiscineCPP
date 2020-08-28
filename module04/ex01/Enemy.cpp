/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:53:39 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:34:56 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy const &e)
{
    *this = e;
}

std::string const &Enemy::getType() const 
{
    return (type);
}

int     Enemy::getHP() const
{
    return (hp);
}

void    Enemy::setHP(int h)
{
    hp = h;
}

void    Enemy::setType(std::string const & t)
{
    type = t;
}

Enemy &Enemy::operator=(const Enemy &e)
{
    this->hp = e.getHP();
    this->type = e.getType();
    return (*this);
}

Enemy::Enemy() { }

void Enemy::takeDamage(int amount)
{
    if (hp - amount < 0)
        hp = 0;
    else
        hp -= amount;
}