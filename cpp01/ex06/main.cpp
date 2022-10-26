/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:53:12 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 11:07:15 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){
	if (ac == 2){
		Harl harl;
		std::string level = av[1];
		harl.complain(level);
	}
	else
		std::cout << "You gotta give Harl ont thing to complain about" << std::endl;	
}