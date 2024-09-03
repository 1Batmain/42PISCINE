/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:39:17 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/03 16:03:54 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "structs.h"

int	ft_strlen(char *str);

void	putstr(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

void	put(t_pool p)
{
	int	y;

	y = 0;
	while (y < p.rows)
	{
		putstr(p.grid[y]);
		y++;
	}
}

void	put_map_error(void)
{
	write(2, "map error\n", 10);
}
