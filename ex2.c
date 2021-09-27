#include <stdio.h>

// prototype
void division(float,float);

int main(void)
{
	division(15,4);
	return 0;
}

void division(float a, float b)
{
	int modulo = (int)a % (int)b;

	printf("division reel : %f / %f = %f\n", a, b, a / b);
	printf("division entière : %d", modulo);
}