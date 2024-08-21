/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:57:13 by bduval            #+#    #+#             */
/*   Updated: 2024/08/18 10:21:45 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lettre;
	int		count;

	count = 0;
	while (count < 26)
	{
		lettre = count + 'a';
		write(1, &lettre, 1);
		count++;
	}
}
