/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:25:26 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 12:21:39 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		int n1, n2, i;
		int	*res;
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		res = ft_range(n1, n2);
		printf("ft-range(%d, %d)\n", n1, n2);
		i = 0;
		while (i < n2 - n1)
			printf("%d\n", res[i++]);
	}
	return (0);
}
*/
