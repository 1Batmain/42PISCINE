/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:11:45 by bduval            #+#    #+#             */
/*   Updated: 2024/09/02 14:35:47 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include<unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define EVEN(nbr) nbr % 2 == 0
# define ODD(nbr) nbr % 2 == 1

typedef struct Pool
{
	int		col;
	int		row;
	char	empty;
	char	obstacle;
	char	fill;
}Pool;
typedef int	t_bool;
#endif
