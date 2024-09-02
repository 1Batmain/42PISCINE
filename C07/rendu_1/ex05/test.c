#include "ft_split.c"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		printf("%d mots \n", ft_count_chains(av[1], av[2]));
	}
	return (0);
}
/*
*/

