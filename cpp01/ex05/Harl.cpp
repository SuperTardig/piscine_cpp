/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:53:25 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 10:34:10 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::redir(int i){
	void	(Harl::*ptr[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	(*this.*ptr[i])();
}

void	Harl::complain(std::string level){
	
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return redir(i);
	std::cout << "This level of complaining is inconcevable for your small mind" << std::endl; 
}

Harl::Harl(){
	std::cout << "Harl has been created" << std::endl;
}

Harl::~Harl(){
	std::cout << "Harl has been destroyed" << std::endl;
}

const std::string Harl::levels[4] = {
	"debug",
	"info",
	"warning",
	"error" 
};