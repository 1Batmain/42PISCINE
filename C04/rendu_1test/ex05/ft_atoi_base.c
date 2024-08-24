/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:01:52 by bduval            #+#    #+#             */
/*   Updated: 2024/08/22 20:02:01 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_len(char *base)
{
	unsigned int	len;

	len = 0;
	while (*(base + len))
		len++;
	return (len);
}
int	ft_int_base_to_decim(int nb, int base)
{
	int	res_ten;
	int	mem_nb;
	int	count_base;

	mem_nb = nb;
	res_ten = 0;
	while (nb)
	{
		nb = mem_nb - nb * count_base;
		count_base = 1;
		mem_nb = nb;
		while (nb > base)
		{
			nb /= 10;
			count_base *= base;
		}
		res_ten += nb * count_base;
		if (count_base == 1)
			break ;
	}
	return (res_ten);
}
int	ft_is_base_or_space_or_sign(char c, const char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (2);
	if (c == '-' || c == '+')
		return (3);
	return (0);
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

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	neg_count;
	int	i;
	int	y;

	i = 0;
	neg_count = 1;
	nb = 0;
	while (ft_is_base_or_space_or_sign(str[i], base) == 2)
		i++;
	while (ft_is_base_or_space_or_sign(str[i], base) == 3)
	{
		if (str[i] == '-')
			neg_count *= -1;
		i++;
	}
	while (ft_is_base_or_space_or_sign(str[i], base) == 1 && str[i])
	{
		y = 0;
		while (str[i] != base[y])
			y++;
		nb += y;
		if (ft_is_base_or_space_or_sign(str[i + 1], base) == 1)
			nb *= ft_len(base);
		i++;
	}
	nb = ft_int_base_to_decim(nb, ft_len(base));
	return (nb * neg_count);
}
/*
int	main(int ac, char **av)
{
	int res;

	ac = 2;
	res = ft_atoi_base(av[1], av[2]);
	printf("%d", res);
	return (0);
}
*/