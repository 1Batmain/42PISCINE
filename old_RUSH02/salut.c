/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salut.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:46:45 by mseverin          #+#    #+#             */
/*   Updated: 2024/08/31 15:46:46 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_split.c"
#include <unistd.h>
#include <stdlib.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

void	write_simple(char *str)
{
	int		fd;
	char	buf[100000];
	int		a;
	char	**res;
	int		i;

	i = 0;
	fd = open("./numbers.dict", O_RDONLY);
	a = read(fd, buf, 691);
	res = ft_split(buf, ":\n ");
	while (str[i] || res[i])
	{
		if (ft_strcmp(str, res[i]) == 0)
		{
			ft_putstr(res[i + 1]);
			break;
		}
		i++;
	}
}

char	*skip_zero(char *str)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * ft_strlen(str));
	if (!res)
		return (NULL);
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		res[j] = str[i];
		i++;
		j++;
	}
	return (res);
}

void	write_two(char *str)
{
	char	*end;

	end = malloc(sizeof(char) * 2);
	if (!end)
		return;
	end[0] = str[0];
	end[1] = '0';
	write_simple(end);
	write(1, " ", 1);
	end[0] = str[1];
	end[1] = '\0';
	write_simple(end);
}
void	write_three(char *str)
{
	char	*first;
	char	*end;

	end = malloc(sizeof(char) * 2);
	first = malloc(sizeof(char) * 1);
	end[0] = str[1];
	end[1] = str[2];
	first[0] = str[0];
	write_simple(first);
	write(1, " ", 1);
	write_simple("100");
	write(1, " ", 1);
	if (ft_strcmp(end, "20") <= 0)
		write_simple(skip_zero(end));
	else
	{
		write_two(end);
	}
}

void	choice(char *str)
{
	char	*res;
	int		size;

	res = skip_zero(str);
	size = ft_strlen(res);
	if(size == 1 || (size == 2 && res[1] == '0'))
		write_simple(res);
	else if(size == 2)
		write_two(res);
	else if (size == 3)
		write_three(res);
}
	
int main(int argc, char **argv)
{
	choice(argv[1]);
	return (argc);
}
