/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:45:17 by bduval            #+#    #+#             */
/*   Updated: 2024/09/03 18:56:57 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <limits.h>
#include <unistd.h>
*/
#include <stdlib.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	unsigned int	src_len;
	unsigned int	i;
	char			*new;

	src_len = ft_len(src);
	if (!src)
		return (NULL);
	new = (char *) malloc(src_len * sizeof (char) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*ptr;
	if (ac > 1)
	{
		ptr = ft_strdup(av[1]);
		printf("av[1]		= %s\n",av[1]);
		printf("duplicate	= %s\n",ptr);
		free(ptr);
	}
	return (0);
}
*/
