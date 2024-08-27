/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:52:14 by bduval            #+#    #+#             */
/*   Updated: 2024/08/26 14:52:20 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	main(int ac, char **av)
{
	if (ac >= 1)
		printf("%d", ft_is_prime(atoi(av[1])));
	return (0);
}
*/
