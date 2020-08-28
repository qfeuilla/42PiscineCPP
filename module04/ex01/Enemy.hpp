/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:22:41 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 11:56:08 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
private :

    int hp;
    std::string type;

public :

    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    Enemy();
    Enemy(Enemy const &);
    std::string const & getType() const;
    int getHP() const;
    void setHP(int);
    void setType(std::string const &);
    Enemy &operator=(const Enemy &);

    virtual void takeDamage(int);
};

#endif