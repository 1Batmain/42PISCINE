/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:01:07 by bduval            #+#    #+#             */
/*   Updated: 2024/08/23 14:28:52 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	unsigned int	i;

	if (argc >= 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_print(argv[argc - i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
