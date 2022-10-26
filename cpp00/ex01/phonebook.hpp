/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:56:48 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 11:31:00 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class Phonebook{
private:
	Contact Contacts[8];
	int		where;
	int		total;
public:
	void	print_all();
	void	add();
	Phonebook();
	~Phonebook();
};

#endif