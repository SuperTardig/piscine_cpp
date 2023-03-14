/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:43 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 14:19:49 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
  std::string type;

public:
  AAnimal();
  AAnimal(std::string name);
  AAnimal(const AAnimal &init);
  virtual ~AAnimal();
  AAnimal &operator=(const AAnimal &src);

  const std::string &getType() const;
  void setType(const std::string &type);

  virtual void setIdea(const std::string &str, const int &i);

  virtual void makeSound() const = 0;
  virtual void showIdea(int i) = 0;
};

#endif