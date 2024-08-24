/*
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void	is_neg_and_is_limit(int *nb)
{
	if (*nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
	if (nb == 0)
		write(1, "0", 1);
}
int	ft_lenght(char *base)
{
	int	i;

	i = 0;
	while (*(base + i))
	{
		i++;
	}
	return (i);
}
void	ft_putnbr(int nb, char *base)
{
	int		mem_nb;
	int		count;
	int	lenght_base;

	lenght_base = ft_lenght(base);
	is_neg_and_is_limit(&nb);
	count = 0;
	mem_nb = nb;
	while (nb)
	{
		nb = mem_nb - nb * count;
		count = 1;
		mem_nb = nb;
		while (nb > lenght_base)
		{
			nb /=lenght_base;
			count *= lenght_base;
		}
		write(1, (base + nb), 1);
		if (count == 1)
			break ;
	}
}
int	main(int ac, char **av)
{
	ac = 2;
	ft_putnbr(atoi(av[1]), av[2]);
	return (0);
}
/*
*/

