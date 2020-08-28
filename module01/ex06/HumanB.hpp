/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:47:50 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 15:25:52 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
public :
	HumanB(std::string);

	void attack();

	void setWeapon(Weapon &);

private :
	std::string name;
	Weapon *weapon;
};

#endif