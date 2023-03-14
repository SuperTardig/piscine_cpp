/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:43 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 08:05:02 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
  std::string type;

public:
  Animal();
  Animal(std::string name);
  Animal(const Animal &init);
  virtual ~Animal();
  Animal &operator=(const Animal &src);

  const std::string &getType() const;
  void setType(const std::string &type);

  virtual void makeSound() const;
};

#endif