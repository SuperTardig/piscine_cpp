/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:37:09 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 13:26:27 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm{
private:
	string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(string targ);
	PresidentialPardonForm(PresidentialPardonForm const &init);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

	int	execute(Bureaucrat const &executor) const;
};