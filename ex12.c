#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100

void aouvrir(char * nomfichier)
{
	char ligne[MAXLINE];
	FILE *file = fopen(nomfichier, "r");
	if(file==NULL)
	{
		printf("Erreur");
	}
	while(fgets(ligne, MAXLINE, file) != NULL)
	{
		fputs(ligne,stdout);
	}
	fclose(file);
}

void main(int argc, char *argv[])
{
	if(argc < 2 || argc > 2)
	{
		printf("Erreur");
		exit(EXIT_FAILURE);
	}

	aouvrir(argv[1]);
}