/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heart.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:49:07 by achu              #+#    #+#             */
/*   Updated: 2024/09/01 13:03:43 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_helper.h"

void	write_simple(char *str, char **res);
void	choice(char *str, char **dictionnaire);

int	ft_arraylen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (i % 3 == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_malloc(char *start, char *end)
{
	int		i;
	int		len;
	char	*memo;

	i = 0;
	len = end - start;
	memo = (char *)malloc ((len + 1) * sizeof(char));
	if (!memo)
		return (NULL);
	while (i < len)
	{
		memo[i] = start[i];
		i++;
	}
	memo[i] = '\0';
	return (memo);
}

char	**stock_digit(char *str)
{
	int		i;
	int		count;
	char	*temp;
	char	**stock;

	i = 3 - ft_strlen(str);
	count = 0;
	temp = str;
	if (i % 3 == 0)
		count = -1;
	stock = (char **)malloc ((ft_arraylen(str) + 1) * sizeof(char *));
	while (*str)
	{
		if (i % 3 == 0)
		{
			stock[count++] = ft_malloc(temp, str);
			temp = str;
		}
		str++;
		i++;
	}
	if (temp)
		stock[count++] = ft_malloc(temp, str);
	stock[count++] = 0;
	return (stock);
}

char	*ft_base(int len)
{
	int		i;
	char	*digit;

	i = 0;
	len = len * 3 - 2;
	digit = (char *)malloc ((len + 1) * sizeof(char));
	if (!digit)
		return (NULL);
	while (i < len)
	{
		digit[i] = '0';
		if (i == 0)
			digit[i] = '1';
		i++;
	}
	digit[i] = '\0';
	return (digit);
}

void	ft_digit(char *str, char **dictionnaire)
{
	int		i;
	int		len;
	char	*dico;
	char	**stock;

	i = 0;
	len = ft_arraylen(str);
	stock = stock_digit(str);
	while (stock[i] != 0)
	{
		choice(stock[i], dictionnaire);
		write(1, " ", 1);
		dico = ft_base(len - i);
		if (ft_strcmp(dico, "1") && ft_strcmp(stock[i], "000"))
		{
			write_simple(dico, dictionnaire);
			write(1, " ", 1);
		}
		i++;
	}
}
