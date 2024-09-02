/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:50:59 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/02 18:17:50 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"

t_square	null_square(void)
{
	t_square	null;

	null.x2 = 0;
	return (null);
}

int	is_null_square(t_square s)
{
	return (s.x2 == 0);
}

t_square	first_square(t_pool p)
{
	t_square	s;
	int			min;

	if (p.rows < p.cols)
		min = p.rows;
	else
		min = p.cols;
	s.x1 = 0;
	s.y1 = 0;
	s.x2 = min;
	s.y2 = min;
	return (s);
}

t_square	next_square(t_square s, t_pool p)
{
	int	size;

	size = s.x2 - s.x1;
	if (s.x2 < p.cols)
	{
		s.x1++;
		s.x2++;
		return (s);
	}
	if (s.y2 < p.rows)
	{
		s.x2 = size;
		s.x1 = 0;
		s.y1++;
		s.y2++;
	}
	size--;
	if (size == 0)
		return (null_square());
	s.y2 = size;
	s.x2 = size;
	s.x1 = 0;
	s.y1 = 0;
	return (s);
}
