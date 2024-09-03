/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_pool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:16:49 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/03 15:55:30 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"

int	ft_strlen(char *str);

int	is_valid_pool(t_pool p)
{
	int	x;
	int	y;

	if (p.rows <= 0 || p.cols <= 0 || p.grid == NULL)
		return (0);
	y = 0;
	while (y < p.rows)
	{
		if (p.grid[y] == NULL)
			return (0);
		x = 0;
		while (p.grid[y][x])
		{
			if (p.grid[y][x] != p.empty && p.grid[y][x] != p.obstacle)
				return (0);
			x++;
		}
		if (x != p.cols)
			return (0);
		y++;
	}
	return (1);
}
