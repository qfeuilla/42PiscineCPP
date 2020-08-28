/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:31:31 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/10 13:36:49 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon() {
    name = "doby";
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &p) {
	*this = p;
}

Peon::Peon(std::string nme) : Victim(nme) {
    name = nme;
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << name << " has been turned into a pink pony !" << std::endl;
}