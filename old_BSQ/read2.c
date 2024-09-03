/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:49:15 by bduval            #+#    #+#             */
/*   Updated: 2024/09/03 20:06:36 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

t_pool	null_pool(void);
t_pool	get_specs(int file_descriptor);
int		is_number(char n);
int		is_printable(char p);

int	first_line_length(int file_descriptor)
{
	char	buff[1];
	int		i;
	int		res_read;

	*buff = 1;
	while (*buff != '\n')
	{
		res_read = read(file_descriptor, buff, 1);
		if (res_read == 0)
			return (-1);
	}
	*buff = 1;
	i = 0;
	while (*buff != '\n')
	{
		res_read = read(file_descriptor, buff, 1);
		if (res_read == 0)
			return (-1);
		i++;
	}
	return (i);
}

int	extract_specs(char *buff, t_pool *p)
{
	int	i;

	i = 0;
	p->rows = 0;
	if (!is_number(buff[i]))
		return (0);
	while (is_number(buff[i]))
	{
		p->rows = 10 * (p->rows) + buff[i] - '0';
		i++;
	}
	p->empty = buff[i++];
	if (!is_printable(p->empty))
		return (0);
	p->obstacle = buff[i++];
	if (!is_printable(p->obstacle))
		return (0);
	p->fill = buff[i];
	if (!is_printable(p->fill))
		return (0);
	return (1);
}

t_pool	get_specs(int file_descriptor)
{
	t_pool	p;
	char	buff[15];
	int		read_res;
	int		i;

	buff[14] = '\0';
	i = 0;
	while (i < 15)
	{
		read_res = read(file_descriptor, &buff[i], 1);
		if (!read_res)
			return (null_pool());
		if (buff[i] == '\n')
			break ;
		i++;
	}
	if (!extract_specs(buff, &p))
		return (null_pool());
	return (p);
}

char	*ft_add_in_str(char *str, char *buff, int len)
{
	char	*res;
	char	*str_to_free;
	int		i;

	if (!len)
	{
		free(str);
		return (NULL);
	}
	res = malloc(len + 1);
	if (!res)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	str_to_free = str;
	while (i < len)
	{
		if (*str)
			res[i++] = *str++;
		else if (*buff)
			res[i++] = *buff++;
	}
	res[i] = '\0';
	free(str_to_free);
	return (res);
}

char	*read_raw(int file_descriptor)
{
	char	buff[101];
	char	*raw_grid;
	int		read_res;
	int		len;

	buff[100] = '\0';
	raw_grid = malloc(1);
	if (!raw_grid)
		return (NULL);
	*raw_grid = '\0';
	len = 0;
	read_res = 100;
	while (read_res == 100)
	{
		read_res = read(file_descriptor, buff, 100);
		len += read_res;
		raw_grid = ft_add_in_str(raw_grid, buff, len);
	}
	return (raw_grid);
}
