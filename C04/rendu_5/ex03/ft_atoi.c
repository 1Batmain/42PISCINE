/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:05:07 by bduval            #+#    #+#             */
/*   Updated: 2024/08/22 20:00:13 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_is_num_or_space_or_sign(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (2);
	if (c == '-' || c == '+')
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	neg_count;
	int	i;

	i = 0;
	neg_count = 1;
	nb = 0;
	while (ft_is_num_or_space_or_sign(str[i]) == 2)
		i++;
	while (ft_is_num_or_space_or_sign(str[i]) == 3)
	{
		if (str[i] == '-')
			neg_count *= -1;
		i++;
	}
	while (ft_is_num_or_space_or_sign(str[i]) == 1 && str[i])
	{
		nb += str[i] - '0';
		if (ft_is_num_or_space_or_sign(str[i + 1]) == 1)
			nb *= 10;
		i++;
	}
	return (nb * neg_count);
}
/*
int	main(int ac, char **av)
{
	ac = 1;
	printf("%d", ft_atoi(av[1]));
	return (0);
}
*/
