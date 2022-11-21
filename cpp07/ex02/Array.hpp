/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:47:24 by bperron           #+#    #+#             */
/*   Updated: 2022/11/18 14:21:00 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>


using std::cout;
using std::string;
using std::endl;

template <class T> class Array{
	private:
		T 				*arr;
		unsigned int	len;
	public:
		T		&operator[](int index) const;
		Array<T>	&operator=(Array<T> const &init);
		
		Array();
		Array(Array<T> const &init);
		Array(unsigned int n);
		~Array();

		int		size() const;	

		class IndexTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("The index requested is too high");};
		};
		class IndexTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("The index requested is too low");};
		};
};
