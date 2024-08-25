/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:05:07 by bduval            #+#    #+#             */
/*   Updated: 2024/08/20 18:10:30 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	ft_is_num_or_space(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == ' ' || c == '\f'|| c == '\n'
	|| c == '\r'||c == '\t' || c == '\v' || c == '-' || c == '+')
		return (2);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	neg_count;
	int	i;

	i = 0;
	neg_count = 1;
	nb = 0;
	while (*(str + i))
	{
		if (*(str + i) == '-')
			neg_count *= -1;
		if (!ft_is_num_or_space(*(str + i)) && nb == 0)
			return (0);
		else if ((ft_is_num_or_space(*(str + i)) == 2 
		|| !ft_is_num_or_space(*(str + i))) && nb > 0)
			break ;
		else if (*(str + i) >= '0' && *(str + i) <= '9')
		{
			nb += *(str + i) - '0';
			if (*(str + i + 1) >= '0' && *(str + i + 1) <= '9')
				nb *= 10;
		}
		i++;
	}
	return (nb * neg_count);
}
int	main(int ac, char **av)
{
	ac = 1;
	printf("%d", ft_atoi(av[1]));
	return (0);
}
/*
*/
