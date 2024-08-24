/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:57:04 by bduval            #+#    #+#             */
/*   Updated: 2024/08/23 13:04:12 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_check_space_sign(char *str, int *sign)
{
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	is_in_base_or_ok(char c, char *base)
{
	unsigned int	i;
	unsigned int	y;

	if (ft_len(base) <= 1)
		return (-1);
	i = 0;
	while (*(base + i))
	{
		y = i + 1;
		while (*(base + y))
		{
			if (*(base + i) == *(base + y))
				return (-1);
		y++;
		}
		if (*(base + i) == '+' || *(base + i) == '-')
			return (-1);
		if (c == base[i])
			return (i);
		i++;
	}
	return (ft_len(base));
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	base_length;
	unsigned int	i;
	int				sign;
	int				nb;

	base_length = ft_len(base);
	if (is_in_base_or_ok('\0', base) == -1)
		return (0);
	sign = 1;
	str = ft_check_space_sign(str, &sign);
	i = 0;
	nb = 0;
	while (is_in_base_or_ok(str[i], base) >= 0
		&& is_in_base_or_ok(str[i], base) < base_length)
	{
		nb += is_in_base_or_ok(str[i], base);
		if (is_in_base_or_ok(str[i + 1], base) >= 0
			&& is_in_base_or_ok(str[i + 1], base) < base_length)
			nb *= base_length;
		i++;
	}
	return (sign * nb);
}
/*
int	main(int ac, char **av)
{
	if (ac >= 1)
	{
	printf("%d",ft_atoi_base(av[1], av[2]));
	}
	return (0);
}
*/
