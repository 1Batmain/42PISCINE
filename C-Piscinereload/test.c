#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct person
{
	int taille;
	int poid;
}person;

void modif (person *x)
{
	x->taille = 2;
}
int	main()
{


person mathieu;

mathieu.taille = 190;
	modif(&mathieu);
	printf("%d", mathieu.taille);
	return (0);
}

