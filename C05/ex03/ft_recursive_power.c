/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/

