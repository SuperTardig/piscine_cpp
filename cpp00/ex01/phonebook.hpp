/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:56:48 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 11:45:38 by bperron          ###   ########.fr       */
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
  int get_total();
  int get_where();
  
  void set_total(int n);
  void set_where(int n);

  void print_all();
  void add();
  Phonebook();
  ~Phonebook();
};

#endif