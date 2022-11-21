/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:14:54 by bperron           #+#    #+#             */
/*   Updated: 2022/11/09 09:13:07 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void swap(T &i, T &j){
	T hold = i;
	i = j;
	j = hold;
}

template <typename T> T max(T i, T j){
	return (i > j) ? i : j;
}

template <typename T> T min(T i, T j){
	return (i < j) ? i : j;
}