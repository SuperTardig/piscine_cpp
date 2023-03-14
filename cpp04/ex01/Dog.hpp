/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:48:37 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 12:50:33 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
private:
  Brain *brain;

public:
  Dog();
  Dog(const Dog &init);
  ~Dog();
  Dog &operator=(const Dog &src);

  void setIdea(const std::string &str, const int &i);

  void makeSound() const;
  void showIdea(int i);
};

#endif