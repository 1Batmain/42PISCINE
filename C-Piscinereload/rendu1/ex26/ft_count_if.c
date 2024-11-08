/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:57:34 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 14:20:05 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (tab[i] == 0)
		i++;
	while (tab[i] != 0)
	{
		if (f(tab[i++]) == 1)
			count++;
	}
	return (count);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int ft_have_c(char *str)
{
	while (*str)
		if (*str++ == 'C')
			return (1);
	return (0);
}

int	main(int ac, char **av)
{
	char *test[] = {0, "LA", "C BIEN", "CA MARCHE BIEN", 0};

	if (ac >= 1)
	{
		printf("nombre d'arguments contenant un 'C': %d", \
				ft_count_if(test, &ft_have_c));
	}
	return (0);
}
*/
