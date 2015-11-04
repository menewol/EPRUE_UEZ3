#include<stdio.h>

#define ADD(X, Y) (X) + (Y) // Einfache Addition
#define SUB(X, Y) (X) - (Y) // Einfache Subtraktion, Grundregel beachten: groessere - kleinere Zahl ist selber zu beachten
#define MUL(X, Y) (X) * (Y) // Einfache Multiplikation
#define DIV(X, Y) (X) / (Y) // Einfache Division

#define WERT1 13.467934 
#define WERT2 1.870345

int main(void)
{

	printf("ADDITION:\t %f + %f = %f\n", WERT1, WERT2, ADD(WERT1,WERT2));
	printf("SUBTRAKTION:\t %f - %f = %f\n", WERT1, WERT2, SUB(WERT1,WERT2));
	printf("MULTIPLIKATION:\t %f * %f = %f\n", WERT1, WERT2, MUL(WERT1,WERT2));
	printf("DIVISION:\t %f / %f = %f\n", WERT1, WERT2, DIV(WERT1,WERT2));

	return 0;
}