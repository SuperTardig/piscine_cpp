/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:46 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 08:10:35 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(std::string name);
  WrongAnimal(const WrongAnimal &init);
  virtual ~WrongAnimal();
  WrongAnimal &operator=(const WrongAnimal &src);

  const std::string &getType() const;
  void setType(const std::string &type);

  void makeSound() const;
};

#endif