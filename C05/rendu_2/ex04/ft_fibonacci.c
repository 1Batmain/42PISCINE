/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:30:54 by bduval            #+#    #+#             */
/*   Updated: 2024/08/26 14:32:03 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
		printf("result = %d", ft_fibonacci(atoi(av[1])));
	}
	return (0);
}
*/
