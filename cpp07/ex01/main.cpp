/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:22:00 by bperron           #+#    #+#             */
/*   Updated: 2022/11/09 14:20:10 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void print(T &to_print){
	cout << to_print << endl;
}

template <typename T> void	plus_one(T &nb){
	nb += 1;
}

template <typename T> void	toup(T &c){
	c -= 32;
}

int main(){
	int arr[5] = {10, 7, 3, 412, 12};
	float arrf[5] = {123.564, 2323.1231, 644, 12, 644};
	iter(arr, 5, &print);
	cout << endl;
	iter(arr, 5, &plus_one);
	iter(arr, 5, &print);
	cout << endl;
	iter(arrf, 5, &print);
	iter(arrf, 5, &plus_one);
	cout << endl;
	iter(arrf, 5, &print);
		
 	char str[12] = {'j', 'e', ' ', 's', 'u', 'i', 's', ' ', 'b', 'o', 'b'};
	iter(str, 11, &print);
	iter(str, 11, &toup);
	cout << endl;
	iter(str, 11, &print);
}

