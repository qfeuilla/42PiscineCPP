/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:31:48 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 10:21:16 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Peon.hpp"

class Sorcerer
{
public :

    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &);
    Sorcerer(void);
    ~Sorcerer();

    void polymorph(Victim const &) const;
	void polymorph(Peon const &) const;

    std::string getName();
    std::string getTitle();

    Sorcerer &operator=(const Sorcerer &);

protected :

    std::string name;
    std::string title;
};

std::ostream  &operator<<(std::ostream & o, Sorcerer & s);

#endif