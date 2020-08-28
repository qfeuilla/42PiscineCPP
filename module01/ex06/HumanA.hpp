/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:47:50 by qfeuilla          #+#    #+#             */
/*   Updated: 2019/11/28 14:14:20 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
public :
	HumanA(std::string, Weapon &);

	void attack();

private :
	std::string name;
	Weapon &weapon;
};

#endif