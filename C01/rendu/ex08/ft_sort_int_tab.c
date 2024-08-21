/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:20:54 by bduval            #+#    #+#             */
/*   Updated: 2024/08/17 18:36:27 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = -1;
	while (++i < size)
	{
		min = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				tab[j] = tab[i];
				tab[i] = min;
			}
		j++;
		}
	}
}
