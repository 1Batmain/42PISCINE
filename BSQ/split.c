/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:14:20 by bduval            #+#    #+#             */
/*   Updated: 2024/09/03 20:21:49 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_chains(char *str, char *charset)
{
	int	i;
	int	count;
	int	chain_tem;

	i = 0;
	count = 0;
	chain_tem = 0;
	while (str[i])
	{
		while (!ft_is_charset(str[i], charset))
		{
			chain_tem = 1;
			i++;
		}
		while (ft_is_charset(str[i], charset))
		{
			i++;
		}
		if (chain_tem == 1)
			count++;
	}
	return (count);
}

int	ft_len_str(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	**operate(char *str, char *charset, int str_count, char **res)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < str_count)
	{
		len = ft_len_str(str, charset);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!res[i])
			return (NULL);
		j = 0;
		while (j < len)
			res[i][j++] = *(str++);
		res[i][j] = '\0';
		while (ft_is_charset(*str, charset))
			str++;
		i++;
	}
	res[str_count] = NULL;
	return (res);
}

char	**ft_split(char *str, char*charset)
{
	char	**res;
	int		str_count;

	str_count = ft_count_chains(str, charset);
	res = (char **)malloc(sizeof (char *) * (str_count + 1));
	if (!res)
		return (NULL);
	res = operate (str, charset, str_count, res);
	if (!res)
		return (NULL);
	return (res);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	main(int ac, char **av)
{
	char	**res;
	int	i;

	if (ac >= 1)
	{
		res = ft_split(av[1], av[2]);
		i = 0;
		while (res[i])
		{
			printf("%p --> %s\n", res[i], res[i]);
			i++;
		}
		printf("%p --> %s\n", res[i], res[i]);
	}
	return (0);
}
*/
