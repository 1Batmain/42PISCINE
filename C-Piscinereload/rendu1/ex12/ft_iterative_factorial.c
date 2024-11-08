/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:42:59 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 12:05:04 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0 || nb > 16)
		return (0);
	if (nb <= 1)
		return (1);
	else
		while (nb > 0)
			res *= nb--;
	return (res);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		printf("fact(%d) = %d\n", atoi(av[1]), ft_iterative_factorial(atoi(av[1])));
	}
	return (0);
}
*/
