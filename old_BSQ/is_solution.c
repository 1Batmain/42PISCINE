/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:19:01 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/02 19:01:44 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	is_solution(t_square s, t_pool p)
{
	int	x;
	int	y;

	y = s.y1;
	while (y < s.y2)
	{
		x = s.x1;
		while (x < s.x2)
		{
			if (p.grid[y][x] == p.obstacle)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
