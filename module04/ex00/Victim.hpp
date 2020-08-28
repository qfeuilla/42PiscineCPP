/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:01:56 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 10:17:38 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
public :

    Victim(std::string name);
    Victim(const Victim &);
    Victim(void);
    ~Victim();

    std::string getName();

    Victim &operator=(const Victim &);

    void getPolymorphed(void) const;

protected :

    std::string name;
};

std::ostream  &operator<<(std::ostream & o, Victim & s);

#endif