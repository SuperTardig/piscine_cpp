/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:12:52 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:03:12 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int main() {
  std::vector<int> nb;
  nb.push_back(123);
  nb.push_back(144);
  nb.push_back(35);
  nb.push_back(2);
  nb.push_back(1121);
  std::deque<int> nb2;
  std::array<int, 5> nb3 = {3, 2, 4, 5, 1};
  std::forward_list<int> nb4;
  std::list<int> nb5;
  for (int i = 0; i < 100; i += 25) {
    nb2.push_back(i);
    nb4.push_front(i);
    nb5.push_back(i * 2);
    nb5.push_front(i * 3);
  }
  std::cout << "With vectors" << std::endl;
  try {
    std::vector<int>::iterator lol = easyfind(nb, 2);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::vector<int>::iterator lol = easyfind(nb, 123444);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "With deque" << std::endl;
  try {
    std::deque<int>::iterator lol = easyfind(nb2, 25);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::deque<int>::iterator lol = easyfind(nb2, 2);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "With array" << std::endl;
  try {
    std::array<int, 5>::iterator lol = easyfind(nb3, 2);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::array<int, 5>::iterator lol = easyfind(nb3, 233);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "With forward_list" << std::endl;
  try {
    std::forward_list<int>::iterator lol = easyfind(nb4, 25);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::forward_list<int>::iterator lol = easyfind(nb4, 2123);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl << "With list" << std::endl;
  try {
    std::list<int>::iterator lol = easyfind(nb5, 50);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::list<int>::iterator lol = easyfind(nb5, 2);
    std::cout << *lol << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
}
