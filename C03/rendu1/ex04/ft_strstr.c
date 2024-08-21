/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:36:33 by bduval            #+#    #+#             */
/*   Updated: 2024/08/21 09:22:44 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unisrd.h>
#include <stdio.h>
#include <stdlib.h>
*/

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
/*
int	main(int ac, char **av)
{
	char *result;
	
	ac = 2;
	result = ft_strstr(av[1], av[2]);

	if (result)
		printf("%s", result);
	else
		printf("Pas trouvee\n");
	return (0);
}
*/
