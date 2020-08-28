/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfeuilla <qfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:31:15 by qfeuilla          #+#    #+#             */
/*   Updated: 2020/02/12 16:11:29 by qfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int main(int ac, char **av)
{
	(void)ac;
	char	testc;
	int		testi;
	float	testf;
	double	testd;
	std::string cmd = av[1];
	bool	cok = true;
	bool	iok = true;
	bool	fok = true;
	bool	dok = true;

	try {
		testf = std::stof(cmd);
	} catch (std::exception & e) {
		fok = false;
	}

	try {
		if (cmd == "nan" || cmd == "+inf" || cmd == "-inf" ||
			cmd == "nanf" || cmd == "+inff" || cmd == "-inff" ||
			cmd == "inf") {
			iok = false;
		}
		std::istringstream(cmd) >> testi;
	} catch (std::exception & e) {
		iok = false;
	}

	try {
		testd = std::stod(cmd);
	} catch (std::exception & e) {
		dok = false;
	}
	try {
		if (cmd == "nan" || cmd == "+inf" || cmd == "-inf" ||
			cmd == "nanf" || cmd == "+inff" || cmd == "-inff" ||
			cmd == "inf") {
			cok = false;
		}
		if (testi != 0 || (cmd.length() == 1 && cmd[0] == '0'))
			testc = testi;
		else if (cmd.length() == 1 && cmd[0] != '0') {
			testc = cmd[0];
		}
		else {
			cok = false;
		}
	} catch (std::exception & e) {
		cok = false;
	}

	std::cout << "char: ";
	if (cok) {
		if (testc <= 31) {
			std::cout << "Non displayable" << std::endl;
		}
		else {
			std::cout << '\'' << testc << '\'' << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
	std::cout << "int: ";
	if (iok) {
		std::cout << testi << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	if (fok) {
		std::cout << testf << 'f' << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}


	std::cout << testf << std::endl;
	std::cout << testd << std::endl;
	return (0);
}