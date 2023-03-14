/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:43 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 13:58:22 by bperron          ###   ########.fr       */
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

  virtual void setIdea(const std::string &str, const int &i);

  virtual void makeSound() const;
  virtual void showIdea(int i);
};

#endif