/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:40:43 by bduval            #+#    #+#             */
/*   Updated: 2024/08/18 17:48:33 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	init_char_tab(char *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = '0' + i;
		i++;
	}
	tab[n - 1] -= 1;
}

void	check_and_propagate(char *tab, int n)
{
	int	y;

	y = -1;
	while (++y < n)
	{
		if (tab[n - 1 - y] > '9' - y)
		{
			tab[n - 1 - y - 1] = tab[n - 1 - y - 1] + 1;
			tab[n - 1 - y] = tab[n - 1 - y - 1] + 1;
		}
	}
	y = -1;
	while (++y < n)
	{
		if (tab[y] > '9' + 1 - n + y)
			tab[y] = tab[y -1] + 1;
	}
}

void	ft_print_combn(int n)
{	
	char	tab[10];

	init_char_tab(tab, n);
	while (tab[0] < '9' + 1 - n)
	{
		tab[n - 1] = tab[n - 1] + 1;
		check_and_propagate(tab, n);
		write(1, &tab, n);
		if (tab[0] < '9' + 1 - n)
			write(1, ", ", 2);
	}
}
