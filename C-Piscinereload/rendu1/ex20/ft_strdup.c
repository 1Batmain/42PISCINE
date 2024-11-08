/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:00:42 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 11:55:12 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;

	len = 0;
	while (src[len])
		len++;
	new = (char *)malloc((len + 1) * sizeof(char));
	new[len--] = '\0';
	while (len >= 0)
	{
		new[len] = src[len];
		len--;
	}
	return (new);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	main(int ac, char **av)
{
	char	*new;

	new = ft_strdup(av[1]);
	if (ac >= 1)
	{
		printf("src = '%s'\nnew = '%s'", av[1], new);
	}
	return (0);
}
*/
