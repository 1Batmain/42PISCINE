/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:42:05 by bduval            #+#    #+#             */
/*   Updated: 2024/08/23 14:42:13 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_fibonacci(int index)
{
	int	fib[3];
	int	i;

	fib[0] = 0;
	fib[1] = 1;
	i = 0;
	while (i < index - 2)
	{
		fib[2] = fib[1];
		fib[1] = fib[0] + fib[1];
		fib[0] = fib[2];
		i++;
	}
	return (fib[1]);
}
/*
int	main(int ac, char **av)
{
	if (ac >= 1)
		printf("%d",ft_fibonacci(atoi(av[1])));
	return (0);
}
*/
