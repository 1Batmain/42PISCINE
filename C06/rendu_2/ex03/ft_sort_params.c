/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:06:18 by bduval            #+#    #+#             */
/*   Updated: 2024/08/28 17:19:49 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcomp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

void	ft_sort_params(int ac, char **av)
{
	char	*tmp;
	int		i;
	int		y;

	i = 1;
	while (i < ac)
	{
		tmp = av[i];
		y = i + 1;
		while (av[y])
		{
			if (ft_strcomp(av[i], av[y]) > 0)
			{
				tmp = av[i];
				av[i] = av[y];
				av[y] = tmp;
			}
			y++;
		}
	i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac >= 1)
	{
		ft_sort_params(ac, av);
		i = 1;
		while (i < ac)
		{
			ft_print(av[i]);
			i++;
		}
	}
	return (0);
}
