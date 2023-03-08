/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:20 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:22:59 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
  std::string type;

public:
  Weapon();
  Weapon(const std::string &type);
  ~Weapon();
  const std::string &getType() const;
  void setType(const std::string &type);
};

#endif