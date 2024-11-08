/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <bduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:23:42 by bduval            #+#    #+#             */
/*   Updated: 2024/11/08 14:56:14 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write (2, str, i);
}

void	ft_putstr(char *str, int length)
{
	int	i;

	write (1, str, length);
}

int	main(int ac, char **av)
{
	int		fd;
	ssize_t	read_chars;
	char	buf[1024];

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			ft_putstr_err("Cannot read file.\n");
		read_chars = 1024;
		while (read_chars == 1024)
		{
			read_chars = read(fd, buf, 1024);
			ft_putstr(buf, read_chars);
		}
		close(fd);
	}
	else if (ac < 2)
		ft_putstr_err("File name missing.\n");
	else if (ac > 2)
		ft_putstr_err("Too many arguments.\n");
	return (0);
}
