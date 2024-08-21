/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:58:17 by bduval            #+#    #+#             */
/*   Updated: 2024/08/16 13:19:48 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		temp = *(tab + count);
		*(tab + count) = *(tab + (size - 1 - count));
		*(tab + (size - 1 - count)) = temp;
		count++;
	}
}
