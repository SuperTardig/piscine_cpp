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
#include <string>
#include <cmath>
#include <limits>


using std::cout;
using std::endl;
using std::string;

void	print_string(string output[4]){
	cout << "char: " << output[0] << endl;
	cout << "int: " << output[1] << endl;
	cout << "float: " << output[2] << endl;
	cout << "double: " << output[3] << endl;
}

void	print_char(double c){
	if (isprint(c) && c == static_cast<int>(c))
		cout << "char: '" << static_cast<char>(c) << "'" << endl;
	else
		cout << "char: Non displayable" << endl;
}

void	print_int(double i){
	if (trunc(i) == static_cast<int>(i))
		cout << "int: " << static_cast<int>(i) << endl;
	else
		cout << "int: Not an int" << endl;
}

void	print_float(double f){
	if (static_cast<int>(f) == (double) f)
		cout << "float: " << static_cast<float>(f) << ".0f" << endl;
	else
		cout << "float: " << static_cast<float>(f) << "f" << endl;
}

void	print_double(double d){
	if (static_cast<int>(d) == d)
		cout << "double: " << d << ".0" << endl;
	else
		cout << "double: " << d << endl;
}

void	print_type(double val){
	print_char(val);
	print_int(val);
	print_float(val);
	print_double(val);
}

int	findType(string val){
	int	dot = 0;

	if (val.size() == 1 && isdigit(val.at(0)) == false)
		return (1);
	else if (val.find('.', 0) != val.npos)
	{
		if (val.find('f', 0) != val.npos){
			for (size_t i = 0; i < val.size() - 1; i++){
				if (val.at(i) == '.')
					dot++;
				else if (isdigit(val.at(i)) == false)
					return -1;
			}
			if (dot > 1)
				return -1;
			return 4;
		}
		else {
			for (size_t i = 0; i < val.size(); i++){
				if (val.at(i) == '.')
					dot++;
				else if (isdigit(val.at(i)) == false)
					return -1;
			}
			if (dot > 1)
				return -1;
			return 3;
		}
	}
	else{
		for (size_t i = 0; i <val.size() ; i++)
			if (isdigit(val.at(i)) == false)
					return -1;
		if (atoi(val.c_str()) != atol(val.c_str()))
			return 3;
		return 2;
	}
}

int main(int ac, char **av){
	string output[4] = {"impossible", "impossible", "impossible", "impossible"};

	if (ac == 1 || av[0] == 0){
		std::cout << "Error: number of arguments" << std::endl;
		return (0);
	}
	string val(av[1]);
	if (val.empty()){
		std::cout << "Error: number of arguments" << std::endl;
		return (0);
	}
	if (isnan(atof(val.c_str())) != 0 && (val.size() == 3 || val.size() == 4 && val[3] == 'f')){
		if (val.size() == 3)
			cout << "The type is: double" << endl;
		else
			cout << "The type is: float" << endl;
		output[2] = "nanf";
		output[3] = "nan";
		print_string(output);
	}
	else if (isinf(atof(val.c_str())) != 0 && (val.compare("+inf") == 0 || val.compare("-inf") == 0 || val.compare("+inff") == 0 || val.compare("-inff") == 0)){
		if (val.size() == 5)
			cout << "The type is: float" << endl;
		else
			cout << "The type is: double" << endl;
		if (val.at(0) == '-'){
			output[2] = "-inff";
			output[3] = "-inf";
		}
		if (val.at(0) == '+'){
			output[2] = "+inff";
			output[3] = "+inf";
		}
		print_string(output);
	}
	else{
		switch(findType(val)){
			case 1:
				cout << "The type is: char" << endl;
				print_type(val.at(0));
				break;
			case 2:
				cout << "The type is: int" << endl;
				print_type(atoi(val.c_str()));
				break;
			case 3:
				cout << "The type is: double" << endl;
				print_type(atof(val.c_str()));
				break;
			case 4:
				cout << "The type is: float" << endl;
				print_type(atof(val.c_str()));
				break;
			default:
				cout << "Error: bad argument" << endl;
				print_string(output);
				break;
		}
	}
}