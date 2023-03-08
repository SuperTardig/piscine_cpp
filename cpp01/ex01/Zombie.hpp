/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:46 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:04:41 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie(const std::string &name);
  Zombie();
  ~Zombie();

  void set_name(const std::string &name);
  const std::string &get_name() const;

  void announce(void);
};

Zombie *zombieHorde(int n, std::string name);

#endif