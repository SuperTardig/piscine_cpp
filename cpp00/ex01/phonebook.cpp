/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:55:40 by bperron           #+#    #+#             */
/*   Updated: 2023/03/03 10:45:35 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

void Phonebook::add() {
  std::cout << this->where << std::endl;
  if (this->where > 7)
    this->where = 0;
  this->Contacts[this->where].add();
  if (this->total < 7)
    this->total++;
  this->where++;
}

void Phonebook::print_all() {
  std::string choice;
  int hold;

  if (this->total > 0) {
    std::cout << "Index     |First Name|Last Name |Nickname  \n";
    for (int i = 0; i < this->total; i++)
      this->Contacts[i].print_all(i + 1);
    std::cout << "which Contact do you want to see their information: ";
    getline(std::cin, choice);
    try {
      hold = stoi(choice);
      if (hold <= this->total)
        this->Contacts[hold - 1].print_one();
      else
        std::cout << "the Contact you're looking for doesn't exist\n";
    } catch (const std::exception &e) {
      std::cout << "You need to enter a numeric argument\n";
    }
  } else
    std::cout << "there is currently no Contacts in your phonebook\n";
}

Phonebook::Phonebook() {
  this->where = 0;
  this->total = 0;
}

Phonebook::~Phonebook() {}