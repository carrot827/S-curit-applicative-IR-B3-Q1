#include <stdio.h>
#define TAILLE 30

int longueur (char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(void)
{
    char tab[TAILLE] = "Bonjour ceci est une chaine";
    printf("Chaine : '%s'\n", tab);
    printf("Longueur : %d\n", longueur(tab));
    return 0;
}