/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:06:22 by bduval            #+#    #+#             */
/*   Updated: 2024/09/05 14:53:11 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_dup(char *str)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_len(str) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = str_dup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return (tab);
}
/*
#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	put_nb(int nb)
{
	char	c;

	if (nb > 10)
		put_nb(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1); 
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		put_str(par[i].str);
		write(1, "\n", 1);
		put_nb(par[i].size);
		write(1, "\n", 1);
		put_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
#include <stdio.h>
int	main(int ac, char **av)
{
	t_stock_str	*tab;
	if (ac >= 1)
		tab = ft_strs_to_tab(ac, av);
		ft_show_tab(tab);
	//int	i;
	//i = 0;
	//while (i < ac)
	//printf("size : %d\n", tab[i].size,
	//	"str : %s\n", tab[i].str,
	//	"copy : %s\n",tab[i++].copy);
	//	return (0);
}
*/
