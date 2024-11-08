/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:06:18 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 12:06:11 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return ((int)i);
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(int ac, char **av)
{
	int nb = atoi(av[1]);
	if (ac >= 1)
	{
		printf("sqrt(%d) = %d\n", nb, ft_sqrt(nb));		
	}
	return (0);
}
*/
