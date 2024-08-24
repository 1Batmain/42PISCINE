/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:44:26 by bduval            #+#    #+#             */
/*   Updated: 2024/08/19 12:26:14 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unisrd.h>
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	y = 0;
	while (*(src + y))
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char tab[20]= "BIEEEEN";

	if (ac >= 1)
		ft_strcat(tab, av[1]);
	printf("%s", tab);
	return (0);
}
*/
