/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:16:16 by rarangur          #+#    #+#             */
/*   Updated: 2024/08/24 14:33:09 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		get_grid_size(char *str);
int		*get_grid_borders(char *str);
int		*solve(int *grid_borders);
void	print_result(int *solved_grid);

void	show_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argn, char **argv)
{
	int	size;
	int	*borders;
	int	*result;

	if (argn != 2)
		show_error();
	else
	{
		size = get_grid_size(argv[1]);
		if (size == 4)
		{
			borders = get_grid_borders(argv[1]);
			result = solve(borders);
			if (result)
				print_result(result);
			else
				show_error();
			free(borders);
			free(result);
		}
		else
			show_error();
	}
}
