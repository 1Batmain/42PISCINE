/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print__comb2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:49:40 by bduval            #+#    #+#             */
/*   Updated: 2024/08/15 09:49:21 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	number;
	int		a;
	int		b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			number = (a / 10) + '0';
			write(1, &number, 1);
			number = (a % 10) + '0';
			write(1, &number, 1);
			write(1, " ", 1);
			number = (b / 10) + '0';
			write(1, &number, 1);
			number = (b % 10) + '0';
			write(1, &number, 1);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
	a++;
	}
}
