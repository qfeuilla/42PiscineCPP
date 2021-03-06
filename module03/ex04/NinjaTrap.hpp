/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:27:13 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 17:16:01 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public :
    NinjaTrap(std::string name);
    NinjaTrap(void);
    ~NinjaTrap();
    void ninjaShoebox(NinjaTrap & adv);
    void ninjaShoebox(FragTrap & adv);
    void ninjaShoebox(ScavTrap & adv);
};

#endif