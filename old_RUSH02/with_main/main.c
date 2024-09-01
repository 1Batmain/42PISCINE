/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:36:15 by mseverin          #+#    #+#             */
/*   Updated: 2024/09/01 14:12:33 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *clean_arg(char *str);
void    ft_digit(char *str, char **dictionnaire);
#include <unistd.h>
#include "ft_helper.h"
#include "stdlib.h"

void ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
	i++;
	}
	free(str);
}

int main(int argc, char **argv)
{
	char    *argument;
	char    **dictionnaire;
	
	if (argc == 2)
	{
		dictionnaire = init_dict("./numbers.dict");
		argument = clean_arg(argv[1]);
	}
	else if (argc == 3)
	{
		dictionnaire = init_dict(argv[1]);
		argument = clean_arg(argv[2]);
	}
	else
	{
	write(2, "Error\n", 6);
	return (0);
	}
	ft_digit(argument, dictionnaire);
	ft_free(dictionnaire);
	free(argument);
}
