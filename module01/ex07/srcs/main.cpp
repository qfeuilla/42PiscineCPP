/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:31:15 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/08 15:31:49 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <regex>

int main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::fstream new_file;
	std::fstream old_file;
	std::string  file_data;
	char		ch;

	if (ac != 4)
	{
		std::cout << "Error to few arguments" << std::endl;
		return (1);
	}
	old_file.open(av[1], std::ios::in);
	new_file.open("FILENAME.replace", std::ios::out | std::ios::trunc);
	s1 = av[2];
	s2 = av[3];
	while (!old_file.eof())
	{
		old_file.get(ch);
		if (!old_file.eof())
			file_data.append(1, ch);
	}
	
	std::regex  e(s1);

	file_data = std::regex_replace(file_data, e, s2);

	new_file << file_data;

	old_file.close();
	new_file.close();
	return (0);
}