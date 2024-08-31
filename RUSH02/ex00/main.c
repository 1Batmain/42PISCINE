/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:36:15 by mseverin          #+#    #+#             */
/*   Updated: 2024/08/31 18:36:16 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *clean_arg(char *str);
void    ft_digit(char *str);
#include <unistd.h>

int main(int argc, char **argv)
{
    char    *argument;

    (void)argc;
    argument = clean_arg(argv[1]);
    if (argument == NULL || argument[0] == '\0')
    {
        write(2, "Error\n", 6);
        return (0);
    }
    ft_digit(argument);
}
