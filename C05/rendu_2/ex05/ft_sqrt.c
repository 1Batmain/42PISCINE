/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:33:41 by bduval            #+#    #+#             */
/*   Updated: 2024/08/26 15:00:23 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqr_i;

	i = 0;
	while (i * i <= nb && i < 46341)
	{
		sqr_i = i * i;
		if (sqr_i == nb)
			return (i);
		if (sqr_i > nb)
			return (0);
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	main(int ac, char **av)
{
	if(ac >= 1)
		printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
