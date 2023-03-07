/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:30:52 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 11:04:51 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void upper(std::string string) {
  for (int i = 0; string[i]; i++)
    string[i] = std::toupper(string[i]);
  std::cout << string;
}

int main(int argc, char **argv) {
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else {
    std::string string;
    for (int i = 1; argv[i]; i++) {
      string = argv[i];
      upper(string);
    }
  }
  std::cout << std::endl;
}