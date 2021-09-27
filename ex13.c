#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 20

void main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Erreur");
		exit(EXIT_FAILURE);
	}

	char tab[TAILLE];
	size_t argLen = strlen(argv[1])+1;

	snprintf(tab, argLen, "%s", argv[1]);
	printf("Contenu du tableau = %s\n", tab);
	printf("Adresse du tableau = %p\n", &tab);
	printf("Taille du tableau = %d\n", strlen(tab)+1);
	exit(EXIT_SUCCESS);
}