/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_grid_borders.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:44:21 by rarangur          #+#    #+#             */
/*   Updated: 2024/08/24 14:38:40 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
*/
#include <stdlib.h>

int	*get_grid_borders(char *str)
{
	int	*grid_borders;
	int	i;
	int	y;

	grid_borders = (int *) malloc(16 * sizeof(int));
	i = 0;
	y = 0;
	while (str[i] && y < 16)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			grid_borders[y] = str[i] - '0';
			y++;
		}
		i++;
	}
	return (grid_borders);
}

/*
int	main(int ac, char **av)
{
	int	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac >= 1)
	{
		result = get_grid_borders(av[1]);
	}
		while (i < 16)
		{
			printf("%d ", result[i]);
			i++;
		}
	return (0);
}
*/
