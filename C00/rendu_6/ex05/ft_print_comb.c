/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:34:40 by bduval            #+#    #+#             */
/*   Updated: 2024/08/17 17:52:42 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers[3];
	int		somme;

	numbers[0] = '0';
	while (numbers[0] < '8')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '9')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				write(1, &numbers, 3);
				somme = numbers[0] + numbers[1] + numbers[2];
				if (somme != '7' + '8' + '9')
					write(1, ", ", 2);
			numbers[2]++;
			}
		numbers[1]++;
		}
	numbers[0]++;
	}
}
