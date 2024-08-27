/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:43:59 by bduval            #+#    #+#             */
/*   Updated: 2024/08/26 11:26:42 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
