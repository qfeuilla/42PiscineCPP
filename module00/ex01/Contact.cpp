/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:02:52 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/08/09 15:49:32 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	// not used so not implemented here
}

Contact::Contact(std::string firstName, std::string lastName, 
				std::string nickName, std::string adress, 
				std::string email, std::string phone, std::string birthday,
				std::string favoriteMeal, std::string underwearColor, 
				std::string secret) : firstName(firstName), lastName(lastName), 
				nickName(nickName), adress(adress), email(email), phone(phone), 
				birthday(birthday), favoriteMeal(favoriteMeal), 
				underwearColor(underwearColor), secret(secret) {}

Contact::~Contact(void) {}

Contact::Contact(const Contact &) {
	// not used so not implemented here
}

Contact &Contact::operator=(const Contact &) {
	return (*this);
}

std::string const Contact::get_firstName() const {
	return (this->firstName);
}
std::string const Contact::get_lastName() const {
	return (this->lastName);
}
std::string const Contact::get_nickName() const {
	return (this->nickName);
}
std::string const Contact::get_adress() const {
	return (this->adress);
}
std::string const Contact::get_email() const {
	return (this->email);
}
std::string const Contact::get_phone() const {
	return (this->phone);
}
std::string const Contact::get_birthday() const {
	return (this->birthday);
}
std::string const Contact::get_favoriteMeal() const {
	return (this->favoriteMeal);
}
std::string const Contact::get_underwearColor() const {
	return (this->underwearColor);
}
std::string const Contact::get_secret() const {
	return (this->secret);
}