/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:55:40 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 07:58:32 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

void Phonebook::add() {
  if (this->get_where() > 7)
    this->set_where(0);
  this->Contacts[this->get_where()].add();
  if (this->get_total() < 8)
    this->set_total(this->get_total() + 1);
  this->set_where(this->get_where() + 1);
}

void Phonebook::print_all() {
  std::string choice;
  int hold;

  if (this->get_total() > 0) {
    std::cout << "     Index|First Name| Last Name|  Nickname\n";
    for (int i = 0; i < this->get_total(); i++)
      this->Contacts[i].print_all(i + 1);
    std::cout << "which Contact do you want to see their information: ";
    getline(std::cin, choice);
    if (std::cin.eof()) {
      std::cout << "\nThank you for using my phonebook" << std::endl;
      exit(0);
    }
    try {
      hold = stoi(choice);
      if (hold <= this->get_total())
        this->Contacts[hold - 1].print_one();
      else
        std::cout << "the Contact you're looking for doesn't exist\n";
    } catch (const std::exception &e) {
      std::cout << "You need to enter a numeric argument\n";
    }
  } else
    std::cout << "there is currently no Contacts in your phonebook\n";
}

const int &Phonebook::get_total() const { return (this->total); }

const int &Phonebook::get_where() const { return (this->where); }

void Phonebook::set_total(int n) { this->total = n; }

void Phonebook::set_where(int n) { this->where = n; }

Phonebook::Phonebook() {
  set_total(0);
  set_where(0);
}

Phonebook::~Phonebook() {}