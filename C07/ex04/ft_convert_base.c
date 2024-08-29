/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:00:42 by bduval            #+#    #+#             */
/*   Updated: 2024/08/29 19:48:36 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// TODO GERER LE CAS nbr = 0
#include <stdlib.h>

char	*ft_check_space_sign(char *str, int *sign);

int		ft_len(char *base);

int		is_in_base_or_ok(char c, char *base);

int		ft_atoi_base(char *str, char *base);

char	*ft_alloc(char **res, int size)
{
	*res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	return (res[0]);
}

int	check_sign(int *nbr, int *sign)
{
	if (*nbr < 0)
	{
		*sign = 1;
		*nbr = -*nbr;
		return (1);
	}
	return (0);
}

char	*ft_putnbr_base(int nbr, char *base, char **res, int *i)
{
	int	len_base;

	len_base = ft_len(base);
	if (nbr < len_base)
	{
		*res = ft_alloc(res, *i + 2);
		res[0][*i + 1] = '\0';
		res[0][0] = base[nbr];
		*i = 0;
	}
	else
	{
		(*i)++;
		ft_putnbr_base(nbr / len_base, base, res, i);
		res[0][++(*i)] = base [nbr % len_base];
	}
	return (*res);
}

char	*ft_add_sign(char *og_nbr)
{
	char	*res_nbr;
	int		len_res;
	int		i;

	res_nbr = NULL;
	len_res = ft_len(og_nbr);
	res_nbr = (char *)malloc(sizeof(char) * len_res + 1);
	res_nbr[0] = '-';
	i = 0;
	while (og_nbr[i])
	{
		res_nbr[1 + i] = og_nbr[i];
		i++;
	}
	res_nbr[1 + i] = '\0';
	free(og_nbr);
	return (res_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res_nbr;
	int		decim;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	if ((is_in_base_or_ok('x', base_from) == -1
	|| is_in_base_or_ok('x', base_to) == -1))
		return (NULL);
	decim = ft_atoi_base(nbr, base_from);
	sign = check_sign(&decim, &sign);
	res_nbr = ft_putnbr_base(decim, base_to, &res_nbr, &i);
	if (sign)
		res_nbr = ft_add_sign(res_nbr);
	return (res_nbr);
}
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	main(int ac, char **av)
{
	char	*res;

	if (ac >= 1)
	{
		res = ft_convert_base(av[1], av[2], av[3]);
		printf("%s", res);
		free (res);
	}
	return (0);
}
/*
*/
