/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:44:26 by bduval            #+#    #+#             */
/*   Updated: 2024/08/19 12:33:04 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unisrd.h>
#include <stdio.h>
#include <stdlib.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	y = 0;
	while (*(src + y) && (y < nb))
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

	if (ac > 1)
		ft_strncat(tab, av[1], atoi(av[2]));
	printf("%s", tab);
	return (0);
}
*/
