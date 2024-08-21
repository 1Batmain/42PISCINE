#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
*/
int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	if (ac >= 1)
		printf("%d", ft_is_prime(atoi(av[1])));
	return (0);
}
/*
*/

