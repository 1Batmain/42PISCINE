/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:50:00 by bduval            #+#    #+#             */
/*   Updated: 2024/09/03 18:57:05 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof (int));
	if (!tab)
		return (NULL);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}
/*
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	min = atoi(av[1]);
	int	max = atoi(av[2]);
	int	i;

// 	TODO TEST ONLY
//	for (int i = 0; i < (max - min); i++)
//		printf("tab[%d] = %d\n", i, tab[i]);

	i = 0;
	if (ac >= 3)
		printf("la fonction retourne : %p\n", ft_range(min, max));
	return (0);
}
*/
