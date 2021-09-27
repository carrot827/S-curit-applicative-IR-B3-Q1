#include <stdio.h>

// prototype
int somme(int,int);

int main(void)
{
	printf("\nLe total est: %d\n", somme(5,5));
	return 0;
}

int somme(int a, int b)
{
	return a+b;
}