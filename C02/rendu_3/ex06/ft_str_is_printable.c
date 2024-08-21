/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:55:23 by bduval            #+#    #+#             */
/*   Updated: 2024/08/19 17:24:02 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	char	c;
	int		i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < ' ' || c > '~')
			return (0);
	i++;
	}
	return (1);
}
/*
int main (){
	char tab[5] = "guie";
	printf("%d", ft_str_is_printable(tab));
}
*/
