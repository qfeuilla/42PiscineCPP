/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:04:09 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 14:39:34 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
public :
	Human();
	std::string identify();
	Brain		&getBrain();

private :
	Brain brain;
};

#endif