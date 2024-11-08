/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:41:07 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 17:44:43 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINTS_H
# define FT_POINTS_H

typedef struct point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif
