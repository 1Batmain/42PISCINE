/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:31:46 by bduval            #+#    #+#             */
/*   Updated: 2024/08/19 18:03:50 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	is_neg_and_is_limit(int *nb)
{
	if (*nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ();
	}
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
	if (nb == 0)
		write(1, "0", 1);
}

void	ft_putnbr(int nb)
{
	char	char_number;
	int		mem_nb;
	int		count;

	is_neg_and_is_limit(&nb);
	count = 0;
	mem_nb = nb;
	while (nb)
	{
		nb = mem_nb - nb * count;
		count = 1;
		mem_nb = nb;
		while (nb > 10)
		{
			nb /= 10;
			count *= 10;
		}
		char_number = nb + '0';
		write(1, &char_number, 1);
		if (count == 1)
			break ;
	}
}
