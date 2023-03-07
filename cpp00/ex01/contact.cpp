/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:37:10 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 09:20:03 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::add() {
  do {
    std::cout << "please enter the first name of the Contact: ";
    std::getline(std::cin, this->first);
  } while (this->first.empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the last name of the Contact: ";
    std::getline(std::cin, this->last);
  } while (this->last.empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the nickname of the Contact: ";
    std::getline(std::cin, this->nick);
  } while (this->nick.empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the phone number of the Contact: ";
    std::getline(std::cin, this->number);
  } while (this->number.empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the darkest secret of the Contact: ";
    std::getline(std::cin, this->secret);
  } while (this->secret.empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << std::endl << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
}

void Contact::print_all(int i) {
  std::cout << std::right << std::setw(10) << i << "|";
  if (this->first.size() > 9)
    std::cout << std::right << std::setw(9) << this->first << "|";
  else
    std::cout << std::right << std::setw(10) << this->first << "|";
  if (this->last.size() > 9)
    std::cout << std::right << std::setw(9) << this->last << "|";
  else
    std::cout << std::right << std::setw(10) << this->last << "|";
  if (this->nick.size() > 9)
    std::cout << std::right << std::setw(9) << this->nick << std::endl;
  else
    std::cout << std::right << std::setw(10) << this->nick << std::endl;
}

void Contact::print_one() {
  std::cout << "First name: " << this->first << std::endl;
  std::cout << "Last name: " << this->last << std::endl;
  std::cout << "Nickname: " << this->nick << std::endl;
  std::cout << "Telephone number: " << this->number << std::endl;
  std::cout << "Darkest secret: " << this->secret << std::endl;
}

Contact::Contact() {}

Contact::~Contact() {}