/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pool      .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:42:06 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/02 16:42:16 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"

t_pool	null_pool(void)
{
	t_pool	null;

	null.rows = 0;
	null.grid = NULL;
	return (null);
}

int	is_null_pool(t_pool p)
{
	return (p.rows == 0);
}

void	free_pool(t_pool p)
{
	int	i;

	i = 0;
	while (i < p.rows)
	{
		free(p.grid[i]);
		i++;
	}
	free(p.grid);
}
