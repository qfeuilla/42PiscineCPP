/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:18:11 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:16:07 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public :
    SuperTrap(std::string name);
    ~SuperTrap();
};

#endif