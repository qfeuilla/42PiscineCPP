/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 23:04:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 11:56:23 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public :

    RadScorpion();
    ~RadScorpion();
    RadScorpion(RadScorpion const &);
    RadScorpion &operator=(const RadScorpion &);
    virtual void takeDamage(int);
};

#endif