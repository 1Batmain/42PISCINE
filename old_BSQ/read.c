/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:17:39 by bduval            #+#    #+#             */
/*   Updated: 2024/09/03 18:48:28 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "structs.h"

char	**ft_split(char *str, char *set);
char	*ft_add_in_str(char *str, char *buff, int len);
char	*read_raw(int file_descriptor);
int		is_null_pool(t_pool p);
int		ft_strlen(char *str);
int		is_number(char c);
int		is_printable(char c);
int		first_line_length(int file_descriptor);
int		extract_specs(char *buff, t_pool *p);
t_pool	null_pool(void);
t_pool	get_specs(int file_descriptor);

t_pool	extract_map_from_file(int file_descriptor, t_pool p)
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
	p = extract_map_from_file(file_descriptor, p);
	p.cols = ft_strlen(p.grid[0]);
	return (p);
}

t_pool	read_stdi(void)
{
	return (read_map(0));
}

t_pool	read_file(char *filename)
{
	t_pool	p;
	int		f;

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
	//TODO READ_MAP TEST
	//int process = open("./map_test.txt", O_RDONLY);
	//int process = 0;
	//p = read_file("./map_test.txt");
	//i = 0;
	while (p.grid[i])
		printf("%s\n", p.grid[i++]);
	//TODO READ_MAP TEST
	//TODO GET SPECS TEST
	//p = get_specs(0);
	//printf("p.rows		= %d\n"
	//"p.cols		= %d\n"
	//"p.empty		= %c\n"
	//"p.obstacle	= %c\n"
	//"p.fill		= %c\n"
	//,p.rows, p.cols, p.empty, p.obstacle, p.fill);
	//TODO GET SPECS TEST
//		file_descriptor = open("./map_test.txt", O_RDONLY);
//		size = first_line_length(file_descriptor);
//		printf("%d\n", size);

	}
	return (0);
}
*/
