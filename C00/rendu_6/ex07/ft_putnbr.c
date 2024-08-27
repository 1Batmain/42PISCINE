/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:31:46 by bduval            #+#    #+#             */
/*   Updated: 2024/08/25 15:15:28 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb);
}
/*
int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		ft_putnbr(atoi(av[1]));
	}
	return (0);
}
*/
