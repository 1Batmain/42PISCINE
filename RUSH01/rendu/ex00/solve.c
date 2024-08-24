/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:51:38 by rarangur          #+#    #+#             */
/*   Updated: 2024/08/24 19:19:00 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	look(int base, int *grid, int increment);

int	valid_look(int *grid, int i, int *borders)
{
	int	y;
	int	x;

	if (i % 4 == 3)
	{
		y = i / 4;
		if (!look(borders[8 + y], &grid[y * 4], 1))
			return (0);
		if (!look(borders[12 + y], &grid[y * 4 + 3], -1))
			return (0);
	}
	if (i >= 12)
	{
		x = i % 4;
		if (!look(borders[x], &grid[x], 4))
			return (0);
		if (!look(borders[x + 4], &grid[x + 12], -4))
			return (0);
	}
	return (1);
}

int	valid_latin(int n, int *grid, int i)
{
	int	j;

	j = i - 1;
	while (j >= 0 && j % 4 != 3)
	{
		if (grid[j] == n)
			return (0);
		j--;
	}
	j = i - 4;
	while (j >= 0)
	{
		if (grid[j] == n)
			return (0);
		j = j - 4;
	}
	return (1);
}

int	*solve(int *borders)
{
	int	*grid;
	int	i;
	int	n;

	grid = (int *)malloc(16 * sizeof(int));
	i = 0;
	while (i < 16)
	{
		n = grid[i] + 1;
		if (n > 4)
		{
			grid[i] = 0;
			i--;
			if (i < 0)
				return (NULL);
		}
		else
		{
			grid[i] = n;
			if (valid_latin(n, grid, i) && valid_look(grid, i, borders))
				i++;
		}
	}
	return (grid);
}

/*
int	main(void)
{
	int	*result;
	int	test[] = {
			4, 3, 2, 1,
			1, 2, 2, 2,
			4, 3, 2, 1,
			1, 2, 2, 2
		};

	result = solve(test);
	if (result)
		write(1, "Result", 6);
	else
		write(1, "NULL", 4);
}
*/
