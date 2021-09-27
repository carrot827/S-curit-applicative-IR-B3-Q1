#include <stdio.h>
#define TAILLE 5
void remplir(int tab[], int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        printf("Entrez un entier : ");
        scanf("%d", &tab[i]);
    }
}

int main(void)
{
    int tab[TAILLE];
    remplir(tab, TAILLE);
    int i;
    for(i=0; i < TAILLE; i++)
    {
        printf("cellule %d : %d\n", i, tab[i]);
    }
    return 0;
}