/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:29 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:39:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
  std::string name;
  Weapon &weapon;

public:
  HumanA(const std::string &name, Weapon &type);
  ~HumanA();

  const std::string &get_name() const;
  void set_name(const std::string &name);
  void attack();
};

#endif