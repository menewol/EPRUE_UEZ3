#include<stdio.h>

int main(void)
{
	char z1, z2, z3, output;

	/*	16 AND 23
	*	16: 0001 0000
	*	23: 0001 0111	AND
	*		---------
	*		0001 0000 => 16
	*/
	z1 = 16;
	z2 = 23;
	output = z1 & z2;
	printf("16 AND 23 = %d\n", output);

	/*	16 OR 23
	*	16: 0001 0000
	*	23: 0001 0111	OR
	*		---------
	*		0001 0111 => 23
	*/
	z1 = 16;
	z2 = 23;
	output = z1 | z2;
	printf("16 OR 23 = %d\n", output);

	/*	23 LEFTSHIFT 4
	*	23: 0001 0111
	*	23 << 4: 0111 0000 => 112
	*/
	z1 = 23;
	z2 = 4;
	output = z1 << z2;
	printf("23 LEFTSHIFT 4 = %d\n", output);

	/*	16 RIGHTSHIFT 2
	*	16: 0001 0000
	*	16 >> 2: 0000 0100 => 4
	*/
	z1 = 16;
	z2 = 2;
	output = z1 >> z2;
	printf("16 RIGHTSHIFT 2 = %d\n", output);
	
	/*	23 LEFTSHIFT (23 RIGHTSHIFT 3)
	*
	*/
	z1 = 23;
	z2 = 3;
	output = (z1 << (z1 >> z2));
	//printf

	/*	(23 RIGHTSHIFT 2) AND (16 OR (NOT 12))
	*
	*/
	z1 = 23;
	z2 = 16;
	z3 = 12;
	output = (23 >> 2) & (z2 | (~z3));
	//printf

	getchar();
	return 0;
}