#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	p;
	set_point(&p);
	printf ("%d et %d", p.x, p.y);
	return (0);
}
