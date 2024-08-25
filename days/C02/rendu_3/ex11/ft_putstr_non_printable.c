/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:55:23 by bduval            #+#    #+#             */
/*   Updated: 2024/08/20 20:03:27 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (str >= ' ' && str <= '~')
		return (1);
	return (0);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c], 1);
}

void	ft_convert_hexa(unsigned char c)
{
	write(1, "\\", 1);
	ft_print_hexa(c / 16);
	ft_print_hexa(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (ft_str_is_printable(str[i]))
			write(1, str + i, 1);
		else
			ft_convert_hexa(str[i]);
		i++;
	}
}
/*
int main(void)
{
	char *test = " COUCOU\nBIENOUbien";

	printf("Origine : %s\n", test);
	ft_putstr_non_printable(test);
}
*/
