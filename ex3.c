#include <stdio.h>

// prototype
double grandNombre(double,double,double);

int main(void)
{
	printf("\nLe plus grand nombre est: %f\n", grandNombre(10.5, 30.5, 6.4));
	return 0;
}

double grandNombre(double a, double b, double c)
{
	if (a > b && a > c)
	{
		return a;
	}
	if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}