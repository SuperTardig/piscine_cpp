/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:18:00 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 13:50:49 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point) {
  if (((((c.get_x() - point.get_x()) * (a.get_y() - point.get_y())) -
        ((c.get_y() - point.get_y()) * (a.get_x() - point.get_x()))) > 0 &&
       (((a.get_x() - point.get_x()) * (b.get_y() - point.get_y())) -
        ((a.get_y() - point.get_y()) * (b.get_x() - point.get_x()))) > 0 &&
       (((b.get_x() - point.get_x()) * (c.get_y() - point.get_y())) -
        ((b.get_y() - point.get_y()) * (c.get_x() - point.get_x()))) > 0) ||
      ((((c.get_x() - point.get_x()) * (a.get_y() - point.get_y())) -
        ((c.get_y() - point.get_y()) * (a.get_x() - point.get_x()))) < 0 &&
       (((a.get_x() - point.get_x()) * (b.get_y() - point.get_y())) -
        ((a.get_y() - point.get_y()) * (b.get_x() - point.get_x()))) < 0 &&
       (((b.get_x() - point.get_x()) * (c.get_y() - point.get_y())) -
        ((b.get_y() - point.get_y()) * (c.get_x() - point.get_x()))) < 0))
    return (true);
  return (false);
}