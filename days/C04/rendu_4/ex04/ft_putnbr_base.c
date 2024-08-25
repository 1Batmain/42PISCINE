/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:21:55 by bduval            #+#    #+#             */
/*   Updated: 2024/08/25 18:25:37 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int	ft_len(char *base)
{
	unsigned int	len;

	len = 0;
	while (*(base + len))
		len++;
	return (len);
}

int	base_is_ok(char *base)
{
	unsigned int	i;
	unsigned int	y;

	if (ft_len(base) <= 1)
		return (0);
	i = 0;
	while (*(base + i))
	{
		y = i + 1;
		while (*(base + y))
		{
			if (*(base + i) == *(base + y))
				return (0);
		y++;
		}
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_tab(char *tab, char *base)
{
	int	i;

	i = 0;
	while (*(tab + i) == -1)
		i++;
	if (i == 255)
		write(1, base, 1);
	while (i < 255)
	{
		write(1, (base + *(tab + i)), 1);
		++i;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;
	unsigned int	i;
	char			result[255];

	if (!base_is_ok(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	len_base = ft_len(base);
	i = 0;
	while (nbr)
	{
		result[254 - i] = nbr % len_base;
		nbr = nbr / len_base;
		i++;
	}
	while (i <= 254)
	{
		result[254 - i] = -1;
		i++;
	}
	ft_print_tab(result, base);
}
int	main(int ac, char **av)
{
	ac = 2;
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
/*
*/
