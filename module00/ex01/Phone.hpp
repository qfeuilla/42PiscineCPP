/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 16:07:37 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/08/09 18:14:51 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Phone_HPP
#define Phone_HPP 

#define MAX_CONTACT

class Contact;

class Phone {
public:
	Phone();
	~Phone();
	
	Contact &operator=(const Contact &);

	
private:
	Contact contacts[];
};

#endif