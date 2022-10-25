/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:27 by bperron           #+#    #+#             */
/*   Updated: 2022/10/24 13:35:02 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int	main(){
	phonebook	book;
	int			choice;
	
	choice = 0;
	while (1){
		std::cout << "1. ADD\n2. SEARCH\n3. EXIT\n>";
		if (std::cin >> choice) switch (choice){
		case (1):
			book.add();
			break;
		case (2):
			book.print_all();
			break;
		case (3):
			std::cout << "Thank you for using my phonebook\n";
			return (0);
			break;
		default:
			std::cout << "please make a new choice\n";
			choice = 0;
			break;
		}
		else{
            std::cout << "please enter a numeric argument\n";
            std::cin.clear(); 
            std::cin.ignore( 1000, '\n' );
		}
	}
}