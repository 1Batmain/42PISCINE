/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:03:00 by bduval            #+#    #+#             */
/*   Updated: 2024/08/29 19:26:54 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *base)
{
	unsigned int	len;

	len = 0;
	while (*(base + len))
		len++;
	return (len);
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
	int	i;
	int	y;

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
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
			|| base[i] == '\t' || base[i] == '\v')
			return (-1);
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
	int	base_length;
	int	i;
	int	sign;
	int	nb;

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
