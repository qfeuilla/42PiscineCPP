/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:25:58 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 10:18:02 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

#ifndef PEON_HPP
#define PEON_HPP 

class Peon : public Victim
{
public :
    Peon();
    Peon(std::string);
    ~Peon(void);
    Peon(const Peon &);
    
    void getPolymorphed(void) const;

    Peon &operator=(const Peon &);
};

#endif
