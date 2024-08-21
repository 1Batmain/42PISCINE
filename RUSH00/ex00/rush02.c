/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tirimesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:18:57 by tirimesc          #+#    #+#             */
/*   Updated: 2024/08/18 21:13:56 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_row(int col, char start, char mid)
{
	int	c;

	c = 0;
	while (++c <= col)
	{
		if (c == 1)
			ft_putchar(start);
		if (c != col && c != 1)
			ft_putchar(mid);
		if (c == col && c != 1)
			ft_putchar(start);
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int	d;

	d = -1;
	if (col < 0 || row < 0)
		return ;
	while (++d < row)
	{
		if (d == 0)
			ft_print_row(col, 'A', 'B');
		if (d != 0 && d != row -1)
			ft_print_row(col, 'B', ' ');
		if (d == row -1 && row > 1)
			ft_print_row(col, 'C', 'B');
	}
}	
