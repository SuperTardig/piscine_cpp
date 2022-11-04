/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:36:36 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 13:26:18 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : virtual public AForm{
private:
	string target;
	void	robotomy(string target) const;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(string targ);
	RobotomyRequestForm(RobotomyRequestForm const &init);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	int	execute(Bureaucrat const &executor) const;
};