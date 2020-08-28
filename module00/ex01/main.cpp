/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:00:52 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/08/09 16:08:46 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phone.hpp"

int main () {
	std::string cmd = "None";
	std::list<Contact *> contacts;
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

	while (cmd != "EXIT") {
		std::cout << "Phone : ";
		std::getline(std::cin,cmd);
		if (cmd == "ADD") {
			if (contacts.size() >= 8) {
				std::cout << "You have reach the Maximum number "
							"of contacts" << std::endl;
			}
			else {
				std::cout << "first name : "; 
				std::getline(std::cin, firstName);
				std::cout << "last name : "; 
				std::getline(std::cin, lastName);
				std::cout << "nickname : "; 
				std::getline(std::cin, nickName);
				std::cout << "postal adress : "; 
				std::getline(std::cin, adress);
				std::cout << "email adress: "; 
				std::getline(std::cin, email);
				std::cout << "phone number: "; 
				std::getline(std::cin, phone);
				std::cout << "birthday date: "; 
				std::getline(std::cin, birthday);
				std::cout << "favorite meal : "; 
				std::getline(std::cin, favoriteMeal);
				std::cout << "underwear color : "; 
				std::getline(std::cin, underwearColor);
				std::cout << "darkest secret : "; 
				std::getline(std::cin, secret);
				Contact *cont = new Contact(firstName, lastName, nickName,
							adress, email, phone, birthday,
							favoriteMeal, underwearColor, secret);			
				contacts.push_front(cont);
			}
		}
		else if (cmd == "SEARCH") {
			int index = 0;
			std::string	to_display;
			std::list<Contact *>::iterator iterator;
			std::cout << "|\033[1;31m   index  \033[0m|\033[1;32mfirst name" <<
							"\033[0m|\033[1;33m lastname \033[0m|\033[1;34m " <<
							"nickname \033[0m|" << std::endl;
			for (iterator = contacts.begin(); iterator != contacts.end(); 
																iterator++) {
				printf("|\033[1;31m%-10.10s\033[0m", 
							std::to_string(index).c_str());
				if ((*iterator)->get_firstName().length() > 10)
					printf("|\033[1;32m%-9.9s.\033[0m", 
							(*iterator)->get_firstName().c_str());
				else
					printf("|\033[1;32m%-10.10s\033[0m", 
							(*iterator)->get_firstName().c_str());
				if ((*iterator)->get_lastName().length() > 10)
					printf("|\033[1;33m%-9.9s.\033[0m", 
							(*iterator)->get_lastName().c_str());
				else
					printf("|\033[1;33m%-10.10s\033[0m", 
							(*iterator)->get_lastName().c_str());
				if ((*iterator)->get_nickName().length() > 10)
					printf("|\033[1;34m%-9.9s.\033[0m", 
							(*iterator)->get_nickName().c_str());
				else
					printf("|\033[1;34m%-10.10s\033[0m", 
							(*iterator)->get_nickName().c_str());
				printf("|\n");
				index++;
			}
			std::cout << "Wich contact do you want to display" << std::endl;
			while (true) {
				std::getline(std::cin, to_display);
				if (to_display.length() != 1 || ((to_display[0] < '0' || 
					to_display[0] > std::to_string((contacts.size() - 1))[0]) &&
					to_display[0] != '9'))
					std::cout << "Wrong index please enter corect " << 
									"index or 9 to quit" << std::endl;
				else if (to_display[0] == '9')
					break ;
				else {
					iterator = contacts.begin();
					std::advance(iterator, to_display[0] - 48);
					std::cout << "first name : "; 
					std::cout << (*iterator)->get_firstName() << std::endl;
					std::cout << "last name : ";
					std::cout << (*iterator)->get_lastName() << std::endl;
					std::cout << "nickname : ";
					std::cout << (*iterator)->get_nickName() << std::endl;
					std::cout << "postal adress : ";
					std::cout << (*iterator)->get_adress() << std::endl;
					std::cout << "email adress: "; 
					std::cout << (*iterator)->get_email() << std::endl;
					std::cout << "phone number: "; 
					std::cout << (*iterator)->get_phone() << std::endl;
					std::cout << "birthday date: "; 
					std::cout << (*iterator)->get_birthday() << std::endl;
					std::cout << "favorite meal : ";
					std::cout << (*iterator)->get_favoriteMeal() << std::endl;
					std::cout << "underwear color : "; 
					std::cout << (*iterator)->get_underwearColor() << std::endl;
					std::cout << "darkest secret : "; 
					std::cout << (*iterator)->get_secret() << std::endl;
					break ;
				}
			}
		}
		else if (cmd != "EXIT") {
			std::cout << "Command not recognizied" << 
			" please type something else" << std::endl;
		}
	}
	std::list<Contact *>::iterator iterator;
	for (iterator = contacts.begin(); iterator != contacts.end(); iterator++) {
		delete *iterator;
	}
}