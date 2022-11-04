/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:32:10 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 13:26:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : virtual public AForm{
private:
	string target;
	void	ascii(string target) const;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(string targ);
	ShrubberyCreationForm(ShrubberyCreationForm const &init);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

	int	execute(Bureaucrat const &executor) const;
};