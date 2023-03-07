/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:37:10 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:21:42 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::add() {
  string hold;
  do {
    std::cout << "please enter the first name of the Contact: ";
    std::getline(std::cin, hold);
    this->set_first(hold);
  } while (this->get_first().empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the last name of the Contact: ";
    std::getline(std::cin, hold);
    this->set_last(hold);
  } while (this->get_last().empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the nickname of the Contact: ";
    std::getline(std::cin, hold);
    this->set_nick(hold);
  } while (this->get_nick().empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the phone number of the Contact: ";
    std::getline(std::cin, hold);
    this->set_number(hold);
  } while (this->get_number().empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
  do {
    std::cout << "please enter the darkest secret of the Contact: ";
    std::getline(std::cin, hold);
    this->set_secret(hold);
  } while (this->get_secret().empty() && !std::cin.eof());
  if (std::cin.eof()) {
    std::cout << std::endl << "Thank you for using my phonebook" << std::endl;
    exit(0);
  }
}

void Contact::print_all(int i) {
  std::cout << std::right << std::setw(10) << i << "|";
  if (this->get_first().size() > 9)
    std::cout << std::right << std::setw(9) << this->get_first().substr(0, 9) << ".|";
  else
    std::cout << std::right << std::setw(10) << this->get_first() << "|";
  if (this->get_last().size() > 9)
    std::cout << std::right << std::setw(9) << this->get_last().substr(0, 9) << ".|";
  else
    std::cout << std::right << std::setw(10) << this->get_last() << "|";
  if (this->get_nick().size() > 9)
    std::cout << std::right << std::setw(9) << this->get_nick().substr(0, 9) << "." << std::endl;
  else
    std::cout << std::right << std::setw(10) << this->get_nick() << std::endl;
}

void Contact::print_one() {
  std::cout << "First name: " << this->first << std::endl;
  std::cout << "Last name: " << this->last << std::endl;
  std::cout << "Nickname: " << this->nick << std::endl;
  std::cout << "Telephone number: " << this->number << std::endl;
  std::cout << "Darkest secret: " << this->secret << std::endl;
}

const string &Contact::get_first() const { return (this->first); }
const string &Contact::get_last() const { return (this->last); }
const string &Contact::get_nick() const { return (this->nick); }
const string &Contact::get_number() const { return (this->number); }
const string &Contact::get_secret() const { return (this->secret); }

void Contact::set_first(const string &str) { this->first = str; }
void Contact::set_last(const string &str) { this->last = str; }
void Contact::set_nick(const string &str) { this->nick = str; }
void Contact::set_number(const string &str) { this->number = str; }
void Contact::set_secret(const string &str) { this->secret = str; }

Contact::Contact() {}

Contact::~Contact() {}