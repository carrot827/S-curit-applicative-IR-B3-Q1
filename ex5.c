#include <stdio.h>
#include <math.h>

#define PI 3.142

//sans math.h
double surfaceCercle(double rayon)
{
	double section1;
	section1 = PI * rayon * rayon;
	return section1;
}
//avec math.h
//compiler avec : gcc -o ex5 ex5.c -lm

double surfaceCercle_math_h(double rayon)
{
	double section2;
	section2 = PI * pow(rayon,2);
	return section2;
}

double main(void)
{
	//printf("Entez le rayon : ");
	printf("\n1 La surface du cercle est: %.2f\n", surfaceCercle(4));
	printf("\n2 La surface du cercle est: %.2f\n", surfaceCercle_math_h(4));
	return 0;
}