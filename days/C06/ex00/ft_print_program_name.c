/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:53:32 by bduval            #+#    #+#             */
/*   Updated: 2024/08/23 13:56:36 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac >= 1)
	{
		while (av[0][i])
		{
			write (1, &av[0][i], 1);
			i++;
		}
	}
	return (0);
}
