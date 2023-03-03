/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */ 
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:46:57 by bperron           #+#    #+#             */
/*   Updated: 2022/11/08 07:57:51 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <limits>

using std::cout;
using std::endl;
using std::string;

string	rm_spaces(string input){
	int start = 0, end = 0;

	while (input[start] && isspace(input[start]))
		start++;
	while (input[start + end] && !isspace(start + end))
		end++;
	return string(input, start, end);
}

void	print_char(double nb){
	cout << "char : ";
	if (nb > UCHAR_MAX || nb < 0 || isnan(nb)){
		cout << "impossible" << endl;
		return;
	}
	if (!isprint(nb)){
		cout << "non printable" << endl;
		return;
	}
	cout << "'" << static_cast<char>(nb) << "'" << endl;
	return;
}

void	print_int(double nb){
	cout << "int : ";
	if (nb > INT_MAX || nb < INT_MIN || isnan(nb)){
		cout << "impossible" << endl;
		return;
	}
	cout << static_cast<int>(nb) << endl;
	return;
}

void	print_float(double nb){
	cout << "float : ";
	if (isinf(nb)){
		if (nb < 0)
			cout << "-";
		cout << "inf" << endl;
		return;
	}
	if (isnan(nb)){
		cout << "NaNf" << endl;
		return;
	}
	if (nb == static_cast<int>(nb))
		cout << static_cast<float>(nb) << ".0f" << endl;
	else
		cout << static_cast<float>(nb) << "f" << endl;
	return;
}

void	print_double(double nb){
	cout << "double : ";
	if (isinf(nb)){
		if (nb < 0)
			cout << "-";
		cout << "inf" << endl;
		return;
	}
	if (isnan(nb)){
		cout << "NaN" << endl;
		return;
	}
	if (nb == static_cast<int>(nb))
		cout << static_cast<double>(nb) << ".0" << endl;
	else
		cout << static_cast<double>(nb) << endl;
	return;
}

int main(int ac, char **av){
	string hold;
	double nb;

	if (ac == 2){
		hold = rm_spaces(av[1]);
		if (hold.length() == 1 && !isnumber(hold[0]))
			nb = hold[0];
		else{
			try{
				nb = stod(hold);
			}
			catch(const std::exception& e){
				std::cerr << e.what() << '\n';
				return 1;
			}
		}
		print_char(nb);
		print_int(nb);
		print_float(nb);
		print_double(nb);
	}
	else
		cout << "The number of argument entered is wrong" << endl;
}