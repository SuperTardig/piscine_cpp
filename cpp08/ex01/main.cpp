/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:58:15 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:03:16 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
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
}