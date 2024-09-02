/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:07:48 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/02 23:18:51 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

t_pool		read_stdi(void);
t_pool		read_file(char *filename);
t_square	first_square(t_pool p);
t_square	next_square(t_square s, t_pool p);
int			is_null_square(t_square s);
int			is_solution(t_square s, t_pool p);
void		paint(t_square s, t_pool p);
void		put(t_pool p);
void		put_map_error(void);
void		free_pool(t_pool p);

void	solve_and_free(t_pool p)
{
	t_square	s;

	s = first_square(p);
	while (is_null_square(s))
	{
		if (is_solution(s, p))
		{
			paint(s, p);
			put(p);
			free_pool(p);
			return ;
		}
		s = next_square(s, p);
	}
	put_map_error();
	free_pool(p);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac <= 1)
	{
		solve_and_free(read_stdi());
	}
	else
	{
		i = 2;
		while (i <= ac)
		{
			solve_and_free(read_file(av[i]));
			i++;
		}
	}
}
