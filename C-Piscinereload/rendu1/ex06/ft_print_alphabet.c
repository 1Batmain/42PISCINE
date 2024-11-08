/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:27:11 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 16:20:02 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	char	i;

	i = 0;
	while (i < 26)
		ft_putchar('a' + i++);
}
/*
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		(void) av;
		ft_print_alphabet();
	}
	return (0);
}
*/
