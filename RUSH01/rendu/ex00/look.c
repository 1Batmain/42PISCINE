/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:26:41 by bduval            #+#    #+#             */
/*   Updated: 2024/08/24 19:18:41 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
*/
int	look(int base, int *grid, int increment)
{
	int	i;
	int	count;
	int	min;

	min = *grid;
	count = 1;
	i = 0;
	while (i < 4)
	{
		if (*grid > min && *grid > *(grid - increment))
			count++;
		if (*grid == 4)
			break ;
		grid += increment;
		i++;
	}
	if (count == base)
		return (1);
	else
		return (0);
}

/*
int	main(int ac, char **av)
{
	int	grid[16] = {1,2,3,4,2,3,4,1,3,4,1,2,4,1,2,3};
	if (ac >= 1)
	{
		printf("%d",look(4, &grid[0], 1));
	}
	return (0);
}
*/
