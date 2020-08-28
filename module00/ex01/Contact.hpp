/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:00:17 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/08/09 16:17:23 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
#define Contact_HPP 

#include <iostream>

class Contact
{
public :
    Contact();
    Contact(std::string, std::string, std::string, std::string, 
				std::string, std::string, std::string, std::string, 
				std::string, std::string);
    ~Contact(void);
    Contact(const Contact &);

    Contact &operator=(const Contact &);

	std::string const get_firstName() const;
	std::string const get_lastName() const;
	std::string const get_nickName() const;
	std::string const get_adress() const;
	std::string const get_email() const;
	std::string const get_phone() const;
	std::string const get_birthday() const;
	std::string const get_favoriteMeal() const;
	std::string const get_underwearColor() const;
	std::string const get_secret() const;
	
private :
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string adress;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string secret;
};

#endif
