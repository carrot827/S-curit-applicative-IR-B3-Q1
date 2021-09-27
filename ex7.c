#include <stdio.h>
#define TAILLE 30

int longueur (char *str)
{
    int count = 0;
    int nbA = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
    	if (str[i] == 'a')
    	{
    		nbA ++;
    	}
        count++;
    }
    printf("La lettre A apparait %d fois", nbA);
    return count;
}

int main(void)
{
    char tab[TAILLE] = "Bonjour ceci est une chaaaine";
    printf("Chaine : '%s'\n", tab);
    printf("Longueur : %d\n", longueur(tab));
    return 0;
}