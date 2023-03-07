/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:13:49 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:03:09 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T> typename T::iterator easyfind(T src, int to_find) {
  typename T::iterator pos;

  pos = std::find(src.begin(), src.end(), to_find);
  if (pos != src.end())
    return pos;
  else
    throw DoesntExistException();
}