/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 23:04:26 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 11:56:38 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public :

    SuperMutant();
    ~SuperMutant();
    SuperMutant(SuperMutant const &);
    SuperMutant &operator=(const SuperMutant &);
    virtual void takeDamage(int);
};

#endif