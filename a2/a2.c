#include<stdio.h>

#define PI (3.141592)
#define R (1) //Berechnungen im Einheitskreis
#define CALC_PERIMETER(R) 2 * PI * (R)
#define CALC_SURFACE(R) PI * (R) * (R)

int main(void)
{
	printf("Berechnungen im Einheitskreis:\n\n");
	printf("U = 2 * r * PI = %f\n",CALC_PERIMETER(R));
	printf("A = PI * r * r = %f\n",CALC_SURFACE(R));

	getchar();
	return 0;
}