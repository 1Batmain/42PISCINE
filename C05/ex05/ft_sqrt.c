/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:33:41 by bduval            #+#    #+#             */
/*   Updated: 2024/08/21 19:33:43 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
	i++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	if(ac >= 1)
		printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
