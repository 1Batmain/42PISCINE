/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   principal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:53:58 by mseverin          #+#    #+#             */
/*   Updated: 2024/08/31 14:54:00 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include "ft_split.c"
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int main(int argc, char **argv)
{
	int	fd;
	char	buf[100000];
	int	a;
	char	**res;
	int	i = 0;

	fd = open("./numbers.dict", O_RDONLY);
	a = read(fd, buf, 691);
	res = ft_split(buf, ":\n ");
	while (argv[1] || res[i])
	{
		if (ft_strcmp(argv[1], res[i]) == 0)
		{
			ft_putstr(res[i + 1]);
			break;
		}
		i++;
	}
	return (argc);
}