/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:01:07 by bduval            #+#    #+#             */
/*   Updated: 2024/08/27 14:39:56 by bduval           ###   ########.fr       */
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

void	ft_sort_argv(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		y;

	i = 1;
	while (i < argc)
	{
		tmp = argv[i];
		y = i + 1;
		while (argv[y])
		{
			if (argv[y][0] < argv[i][0])
			{
				tmp = argv[i];
				argv[i] = argv[y];
				argv[y] = tmp;
			}
			y++;
		}
	i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 1)
	{
		ft_sort_argv(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_print(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
