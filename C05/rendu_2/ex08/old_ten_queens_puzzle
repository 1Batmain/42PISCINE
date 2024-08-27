/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:18:58 by bduval            #+#    #+#             */
/*   Updated: 2024/08/25 20:29:06 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_look(int *chess, int pos)
{
	int	i;

	i = pos - 1;
	while (i >= 0)
	{
		if (chess[i] && i != pos)
			return(0);
		if (i % 10 == 0)
			break ;
		i--;
	}
	i = pos - 11;
	while (i >= 0)
	{
		if (chess[i] && i != pos)
			return(0);
		i -= 11;
	}
	i = pos + 9;
	while (i <= 99)
	{
		if (chess[i] && i != pos)
			return(0);
		i += 9;
	}
	return (1);
}

int	ft_get_start(int *chess, int i)
{
	while (chess[i] == 0)
		i += 10;
	chess[i] = 0;
	return (i + 10);
}

int	*ft_solve(int *chess, int i, int bet)
{
	i = 0;
	bet = i;
	while (ft_get_start(chess, 1) <= 9)
	{
		while (i < 10)
		{
			if (bet / 10 > 9)
			{
				i--;
				bet = ft_get_start(chess, i);
			}
			if (ft_look(chess, bet))
			{
				chess[bet] = 1;
				i++;
				bet = i;
			}
			else 
				bet += 10;
		}
	ft_print_res(chess);
	i = 9;
	bet = ft_get_start(chess, i);
}

int	ft_ten_queens_puzzle(void)
{
	int	*chess;

	chess = (int *) malloc(100 * sizeof (int));
	ft_solve(chess, 0, 0)
	free(result);
}

int	main(int ac, char **av)
{
	int 	chess_test[100] = {	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
					1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0
					};
	int	*chess;
	if (ac >= 1)
	{
			// TEST LOOK
//		printf("look = %d\n", ft_look(chess_test, 0));

/* 
		// TEST SOLVE
		chess = ft_solve();
		for (int i = 0; i < 10; i++)
		{
			for(int y = 0; y < 10; y++)
				printf("%d, ", chess[y + i*10]);
			printf("\n");
		}
		*/
		free(chess);
	}
	return (0);
}

