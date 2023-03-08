/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:56:48 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 07:52:20 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
private:
  Contact Contacts[8];
  int where;
  int total;

public:
  const int &get_total() const;
  const int &get_where() const;
  void set_total(int n);
  void set_where(int n);

  void print_all();
  void add();
  Phonebook();
  ~Phonebook();
};

#endif