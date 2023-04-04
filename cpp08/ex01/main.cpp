/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:58:15 by bperron           #+#    #+#             */
/*   Updated: 2023/04/04 13:39:21 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
  std::cout << "test 1" << std::endl;
  Span span(10);
  try {
    span.addNumber(6);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::cout << span.shortestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::cout << span.longestSpan() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  
  std::cout << std::endl << "test 2" << std::endl;
  Span test(10000);
  test.bigAddNumber(5000);
  try
  {
    std::cout << test.shortestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    std::cout << test.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  
  std::cout << std::endl << "test 3" << std::endl;
  Span test2(5);
  try {
    test2.addNumber(1);
    test2.addNumber(34);
    test2.addNumber(245);
    test2.addNumber(1000);
    test2.addNumber(2);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try
  {
    std::cout << test2.shortestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    std::cout << test2.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  
  std::cout << std::endl << "test 4" << std::endl;
  Span test3(10000);
  test3.bigAddNumber(10000);
  try
  {
    std::cout << test3.shortestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    std::cout << test3.longestSpan() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}