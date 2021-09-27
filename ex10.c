#include <stdio.h>

void echange(int *, int *);

int main(void)
{
	int i = 10;
	int j = 69;

	printf("Je suis i %d\n", i);
	printf("Je suis j %d\n", j);

	echange(&i, &j);

	printf("\nSuite\n");
	printf("Je suis toujours I et pourtant: %d\n", i);
	printf("Je suis toujours J et pourtant: %d\n", j);
}

void echange(int *adresse_i, int *adresse_j)
{
	
	int temporaire = *adresse_i;
	*adresse_i = *adresse_j;
	*adresse_j = temporaire;
}


// pas de int i, j juste adresse et variable temporaire