/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:39:50 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 16:20:38 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + i++);
	}
}
/*
int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		ft_print_numbers();
	}
	return (0);
}
*/
