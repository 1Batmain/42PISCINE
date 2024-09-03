/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:01:43 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/02 17:01:53 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H

# define STRUCTS_H

typedef struct Square
{
	int	x1;
	int	x2;
	int	y1;
	int	y2;
}	t_square;

typedef struct Pool {
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
	char	fill;
	char	**grid;
}	t_pool;

#endif
