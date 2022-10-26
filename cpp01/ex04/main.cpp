/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:06:57 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 09:47:30 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac,char **av){
	if (ac == 4)
	{
		int				pos;
		std::string		filename = av[1];
		std::string		to_find = av[2];
		std::string		to_replace = av[3];
		std::string		hold;
		
		if (to_find.size() > 0 && to_replace.size() > 0){
			std::ifstream	file(filename);
			if (file.is_open()){
			std::ofstream	new_file(filename.append(".replace"));
				while (file && !file.eof()){
					std::getline(file, hold);
					pos = hold.find(to_find);
					if (pos == std::string::npos)
						new_file << hold << "\n";
					else{
						hold.erase(pos, to_find.length());
						hold.insert(pos, to_replace);
						new_file << hold << "\n";
					}
				}
			}
			else
				std::cout << "There was an error during file opening" << std::endl;
		}
		else
			std::cout << "One of the string passed is empty" << std::endl;
	}
	else
		std::cout << "The number of arguments entered is wrong\nExpected: 3\nReceived: " << ac - 1 << std::endl;
	return (0);
}