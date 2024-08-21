/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (--power > 0)
	{
		result *= nb;
	}
	return (result);
}
/*
int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/

