/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:17:39 by bduval            #+#    #+#             */
/*   Updated: 2024/09/02 23:19:30 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "structs.h"

t_pool	null_pool(void);
char	**ft_split(char *str, char *set);
int	is_null_pool(t_pool p);

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
	while(*buff != '\n')
	{
		res_read = read(file_descriptor, buff, 1);
		if (res_read == 0)
			return (-1);
		i++;
	}
	return (i);
}


int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_printable(char c)
{
	if (c > ' ' && c <= '~')
		return (1);
	return (0);
}

int	extract_specs(char *buff, t_pool *p)
{
	int	i;

	i = 0;
	p->rows = 0;
	if (!is_number(buff[i]))
		return (0);
	while(is_number(buff[i]))
	{
		p->rows = 10 * (p->rows) + buff[i] - '0';
		i++;
	}
	p->empty = buff[i++];
	if(!is_printable(p->empty))
		return (0);
	p->obstacle = buff[i++];
	if(!is_printable(p->obstacle))
		return (0);
	p->fill = buff[i];
	if(!is_printable(p->fill))
		return (0);
	return (1);
}

t_pool	get_specs(int file_descriptor)
{
	t_pool	p;
	char	buff[15];
	int	read_res;
	int	i;

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
	int	i;

	if(!len)
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
	while (i < len)
	{
		if (*str)
			res[i++] = *str++;
		else if (*buff)
			res[i++] = *buff++;
	}
	res[i] = '\0';
	return (res);
}

char	*read_raw(int file_descriptor)
{
	char	buff[101];
	char	*raw_grid;
	int	read_res;
	int	len;

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

t_pool	extract_map(int file_descriptor, t_pool p)
{
	char	*raw_grid;

	raw_grid = read_raw(file_descriptor);
	if (!raw_grid)
		return (null_pool());
	p.grid = ft_split(raw_grid, "\n");
	if (!p.grid)
		return (null_pool());
	return (p);
}

t_pool	read_map(int file_descriptor)
{
	t_pool	p;
	p = get_specs(file_descriptor);
	if (is_null_pool(p))
		return (p);
	p = extract_map(file_descriptor, p);
	return (p);
}

t_pool	read_stdi(void)
{
	return (read_map(0));
}

t_pool	read_file(char *filename)
{
	int	f;
	t_pool	p;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (null_pool());
	}
	p = read_map(f);
	close(f);
	return (p);
}
/*
int	main(int ac, char **av)
{
	t_pool	p;
	int	i;

	(void)av;
	if (ac >= 1)
	{
	//TODO GET SPECS TEST
	//p = get_specs(0);
	//printf("p.rows		= %d\n"
	//"p.cols		= %d\n"
	//"p.empty		= %c\n"
	//"p.obstacle	= %c\n"
	//"p.fill		= %c\n"
	//,p.rows, p.cols, p.empty, p.obstacle, p.fill);
	//TODO GET SPECS TEST
	//TODO READ_MAP TEST
	//int process = open("./map_test.txt", O_RDONLY);
	int process = 0;
	p = read_map(process);
	i = 0;
	while (p.grid[i])
		printf("%s\n", p.grid[i++]);
	//TODO READ_MAP TEST
//		file_descriptor = open("./map_test.txt", O_RDONLY);
//		size = first_line_length(file_descriptor);
//		printf("%d\n", size);

	}
	return (0);
}
*/
