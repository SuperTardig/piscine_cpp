/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:37:19 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:22:18 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>

using std::string;

class Contact {
private:
  std::string first;
  std::string last;
  std::string nick;
  std::string number;
  std::string secret;

public:
  const string &get_first() const;
  const string &get_last() const;
  const string &get_nick() const;
  const string &get_number()const;
  const string &get_secret()const ;

  void  set_first(const string &str);
  void  set_last(const string &str);
  void  set_nick(const string &str);
  void  set_number(const string &str);
  void  set_secret(const string &str);

  void add();
  void print_all(int i);
  void print_one();
  Contact();
  ~Contact();
};

#endif