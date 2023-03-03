/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:37:19 by bperron           #+#    #+#             */
/*   Updated: 2023/03/03 09:48:25 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
  std::string first;
  std::string last;
  std::string nick;
  std::string number;
  std::string secret;

public:
  void add();
  void print_all(int i);
  void print_one();
  Contact();
  ~Contact();
};

#endif