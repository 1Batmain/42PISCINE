/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:32:41 by bduval            #+#    #+#             */
/*   Updated: 2024/09/01 16:00:32 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_operate(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_len(strs[i]))
		{
			*result = strs[i][j];
			result++;
			j++;
		}
		j = 0;
		while (j < ft_len(sep) && i != size - 1)
		{
			*result = sep[j];
			result++;
			j++;
		}
		i++;
	}
	*result = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len_res;
	int		i;

	i = 0;
	len_res = 0;
	while (i < size)
	{
		len_res += ft_len(strs[i]);
		if (i != size - 1)
			len_res += ft_len(sep);
		i++;
	}
	result = (char *)malloc(len_res * sizeof(char) + 1);
	if (!result)
		return (NULL);
	ft_operate(size, strs, sep, result);
	return (result);
}
/*
#include <unistd.h>
#include <limits.h>
int	main(int ac, char **av)
{
	char	*result;

	result = NULL;
	if (ac >= 2)
	{
	result =  ft_strjoin(ac, av, "-//-");
		printf("%s", result);
	}
	free(result);
	return (0);
}
*/
