/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:03:39 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 12:04:25 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		ft_putstr(av[1]);	
	}
	return (0);
}
*/
