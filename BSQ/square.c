/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:50:59 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/04 20:02:57 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"

t_square	null_square(void)
{
	t_square	null;

	null.x1 = 0;
	null.y1 = 0;
	null.x2 = 0;
	null.y2 = 0;
	return (null);
}

int	is_null_square(t_square s)
{
	return (s.x2 == 0);
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
		return (s);
	}
	return (null_square());
}

t_square	grow_square(t_square s, t_pool p)
{
	s.x2++;
	s.y2++;
	if (s.y2 > p.rows)
		return (null_square());
	if (s.x2 <= p.cols)
		return (s);
	return (next_square(s, p));
}
