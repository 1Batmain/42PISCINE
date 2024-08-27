/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:55:54 by bduval            #+#    #+#             */
/*   Updated: 2024/08/27 17:46:50 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	*ft_init_tab(int *tab, int size)
{
	while (size)
	{
		tab[size - 1] = 0;
		size--;
	}
	return (tab);
}

int	ft_look(int *chess, int i, int bet)
{
	int	step;

	step = 1;
	i--;
	while (i >= 0)
	{
		if (chess[i] == bet)
			return (0);
		if (chess[i] == bet - step)
			return (0);
		if (chess[i] == bet + step)
			return (0);
		i--;
		step++;
	}
	return (1);
}

void	ft_print(int *chess)
{
	char	c[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		c[i] = chess[i] + '0';
		i++;
	}
	c[i] = '\0';
	write(1, c, 10);
	write(1, "\n", 1);
}

void	ft_solve(int *chess, int *nb_sol, int i, int bet)
{
	while (chess[0] <= 9)
	{
		while (i < 10)
		{
			if (bet > 9)
			{
				i--;
				bet = chess[i] + 1;
			}
			else if (ft_look(chess, i, bet))
			{
				chess[i] = bet;
				i++;
				bet = 0;
			}
			else
				bet++;
		}
		*nb_sol += 1;
		ft_print(chess);
		i = 9;
		bet = chess[i] + 1;
		if (*nb_sol >= 724)
			break ;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chess[11];
	int	nb_sol;

	nb_sol = 0;
	ft_init_tab(chess, 10);
	ft_solve(chess, &nb_sol, 0, 0);
	return (nb_sol);
}
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main()
{
		ft_ten_queens_puzzle();
	return (0);
}
/*
*/
