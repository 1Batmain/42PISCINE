/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:34:22 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 16:28:03 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	str_cmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int ac, char **av)
{
	char	*temp;
	int		j1;
	int		j2;

	temp = av[1];
	j1 = 1;
	while (j1 < ac)
	{
		j2 = j1 + 1;
		while (j2 < ac)
		{
			if (str_cmp(av[j1], av[j2]) > 0)
			{
				temp = av[j1];
				av[j1] = av[j2];
				av[j2] = temp;
			}
			j2++;
		}
		j1++;
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
			ft_putstr(av[i++]);
	}
	return (0);
}
