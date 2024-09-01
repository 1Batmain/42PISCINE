/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:30:20 by bduval            #+#    #+#             */
/*   Updated: 2024/08/28 17:31:16 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = (int *)malloc((max - min) * sizeof(int *));
	if (!range)
		return (0);
	i = min;
	while (i < max)
	{
		range[0][i - min] = i;
		i++;
	}
	return (max - min);
}
/*
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	min = atoi(av[1]);
	int	max = atoi(av[2]);
	int	*range;

	if (ac >= 3)
		printf("la fonction retourne : %d\n", ft_ultimate_range(&range, min, max));
	free(range);
// 	TODO TEST ONLY
//	for (int i = 0; i < (max - min); i++)
//		printf("tab[%d] = %d\n", i, range[0][i]);
// 	TODO TEST ONLY
	return (0);
}
*/
