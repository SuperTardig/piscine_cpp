/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:27 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 08:20:50 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

int main() {
  Phonebook book;
  std::string choice;

  while (1) {
    std::cout << "1. ADD\n2. SEARCH\n3. EXIT\n>";
    getline(std::cin, choice);
    if (choice == "ADD")
      book.add();
    else if (choice == "SEARCH")
      book.print_all();
    else if (choice == "EXIT") {
      std::cout << "Thank you for using my phonebook" << std::endl;
      return (0);
    } else if (!std::cin.eof())
      std::cout << "please enter a good choice" << std::endl;
    else{
      std::cout << std::endl << "Thank you for using my phonebook" << std::endl;
		return (0);
	}
  }
}