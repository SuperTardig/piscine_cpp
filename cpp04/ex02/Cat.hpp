/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:32 by bperron           #+#    #+#             */
/*   Updated: 2023/03/15 08:39:20 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal {
private:
  Brain *brain;

public:
  Cat();
  Cat(const Cat &init);
  ~Cat();
  Cat &operator=(const Cat &src);

  void setIdea(const std::string &str, const int &i);

  void makeSound() const;
  void showIdea(int i);
};

#endif