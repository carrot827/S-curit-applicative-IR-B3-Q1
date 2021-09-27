#include <stdio.h>

#define NB 3

int grandNombreEtPetitnombre(int tab[], int taille)
{
	int i;
	int min;
	int max;

// min	
	for (i = 0; i < taille; i++)
	{
		printf("\n%d\n", tab[i]);
		if (tab[i] < min)
		{
			min = tab[i];
		}
	}
	printf("Le minimum est %d", min);

// max
	for (i = 0; i < taille; i++)
	{
		printf("\n%d\n", tab[i]);
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
	printf("Le maximum est %d", max);

	return 0;
}

int main(void)
{
	int min;
	int tab[NB] = {1, 5, 20};
	min = grandNombreEtPetitnombre(tab, NB);
	return 0;
}