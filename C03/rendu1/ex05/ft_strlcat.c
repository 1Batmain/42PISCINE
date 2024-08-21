/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:46:43 by bduval            #+#    #+#             */
/*   Updated: 2024/08/21 09:47:49 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unisrd.h>
#include <stdio.h>
#include <stdlib.h>
*/
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	init_dst_len;
	unsigned int	init_src_len;

	init_src_len = ft_strlen(src);
	init_dst_len = ft_strlen(dest);
	if (size <= init_dst_len)
		return (init_src_len + size);
	i = 0;
	while (*(src + i) && (init_dst_len + i < size - 1))
	{
		dest[init_dst_len + i] = src[i];
		i++;
	}
	dest[init_dst_len + i] = '\0';
	return (init_src_len + init_dst_len);
}

/*
int	main(int ac, char **av)
{
	int result;
	
	ac = 2;
	result = ft_strlcat(av[1], av[2], atoi(av[3]));

	if (result)
		printf("%d", result);
	else
		printf("Pas trouvee\n");
	return (0);
}
*/
