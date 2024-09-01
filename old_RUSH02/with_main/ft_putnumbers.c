/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:46:45 by mseverin          #+#    #+#             */
/*   Updated: 2024/09/01 14:06:56 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_helper.h"

void	write_simple(char *str, char **res)
{
	int		i;

	i = 0;
	if (ft_strcmp(str, "0") == 0)
		return;
	while (str[i] || res[i])
	{
		if (ft_strcmp(str, res[i]) == 0)
		{
			ft_putstr(res[i + 1]);
			break;
		}
		i++;
	}
	free(str);
}

char	*skip_zero(char *str)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * ft_strlen(str));
	if (!res)
		return (NULL);
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		res[j] = str[i];
		i++;
		j++;
	}
	return (res);
}

void	write_two(char *str, char **dictionnaire)
{
	char	*end;

	end = malloc(sizeof(char) * 2);
	if (!end)
		return ;
	end[0] = str[0];
	end[1] = '0';
	write_simple(end, dictionnaire);
	write(1, " ", 1);
	end[0] = str[1];
	end[1] = '\0';
	write_simple(end, dictionnaire);
	free(end);
	free(str);
}
void	write_three(char *str, char **dictionnaire)
{
	char	*first;
	char	*end;

	end = malloc(sizeof(char) * 2);
	if (!end)
		return ;
	first = malloc(sizeof(char) * 1);
	if (!first)
		return ;
	end[0] = str[1];
	end[1] = str[2];
	first[0] = str[0];
	write_simple(first, dictionnaire);
	write(1, " ", 1);
	write_simple("100", dictionnaire);
	write(1, " ", 1);
	if (ft_strcmp(end, "20") <= 0)
		write_simple(skip_zero(end), dictionnaire);
	else
	{
		write_two(end, dictionnaire);
	}
	free(end);
	free(first);
	free(str);
}

void	choice(char *str, char **dictionnaire)
{
	char	*res;
	int		size;

	res = skip_zero(str);
	size = ft_strlen(res);
	if(size == 1 || (size == 2 && res[1] == '0') || ft_strcmp(str, "20") <= 0)
		write_simple(res, dictionnaire);
	else if(size == 2)
		write_two(res, dictionnaire);
	else if (size == 3)
		write_three(res, dictionnaire);
	free(str);
	free(res);
}
