/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:36:33 by bduval            #+#    #+#             */
/*   Updated: 2024/08/31 20:12:18 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unisrd.h>
#include <stdio.h>
#include <stdlib.h>
*/
void putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	y;

	if (!*to_find)
		return (str);
	i = 0;
	while (*(str + i))
	{
		y = 0;
		while (*(str + i + y) == *(to_find + y) && *(to_find + y))
		{
			y++;
		}
		if (!*(to_find + y))
			return (str + i);
		i++;
	}
	return (0);
}
int	main(int ac, char **av)
{
//	char *result;
	
//	result = ft_strstr(av[1], av[2]);

	putstr(ft_strstr(av[1], av[2]));
	return (0);
}
/*
*/
