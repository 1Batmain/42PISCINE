/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:32:13 by bduval            #+#    #+#             */
/*   Updated: 2024/08/30 14:57:07 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_str_count(char *str, char *charset, int *str_count)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j] && str[i + j] == charset[j])
		{
			j++;
		}
		if (str_count == NULL && !charset[j])
			return (i);
		if (!charset[j] && str[i + j])
			(*str_count)++;
		i++;
	}
	return (i);
}
char	**ft_operate(char *str, char *charset, int str_count, char **split_res)
{
	int	charset_len;
	int	strlen;
	int	i;
	int	j;

	charset_len = ft_len(charset);
	i = 0;
	while (i < str_count)
	{
		strlen = ft_str_count(str, charset, NULL);
		split_res[i] = (char *)malloc((strlen + 1) * sizeof(char));
		if (!split_res[i])
			return (NULL);
		j = 0;
		while (j < strlen)
		{
			split_res[i][j] = str[j];
			j++;
		}
		split_res[i][j] = '\0';
		str = &str[j + charset_len];
		i++;
	}
	return (split_res);
}
char	**ft_split(char *str, char *charset)
{
	char	**split_res;
	int		str_count;
	int		i;
	int		j;
	
	if (!ft_len(charset))
		return (NULL);
	str_count = 1;
	ft_str_count(str, charset, &str_count);
	split_res = (char **)malloc(str_count * sizeof (char *));
	if (!split_res)
		return (NULL);
	split_res = ft_operate(str, charset, str_count, split_res);
	if (!split_res)
		return (NULL);
	return (split_res);
}
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	main(int ac, char **av)
{
	char	**result;
	int	i;

	if (ac >= 1)
	{
	result = ft_split(av[1], av[2]);

	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}

	}
	return (0);
}
/*
*/
