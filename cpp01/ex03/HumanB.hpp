/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:38 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 09:05:34 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
  std::string name;
  Weapon *type;

public:
  HumanB(const std::string &name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon &type);
  const std::string &get_name() const;
  void set_name(const std::string &name);
};

#endif