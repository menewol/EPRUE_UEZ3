#include<stdio.h>

int main(void)
{
	char z1 = 16, z2 = 23, z3 = 12, z4 = 2, z5 = 4, z6 = 3, output;

	/*	16 AND 23 */
	output = z1 & z2;
	printf("%-40s|%4d|\n","16 AND 23 =", output);

	printf("----------------------------------------------\n");

	/*	16 OR 23 */
	output = z1 | z2;
	printf("%-40s|%4d|\n","16 OR 23 =",  output);

	printf("----------------------------------------------\n");

	/*	23 LEFTSHIFT 4 */
	output = z2 << z5;
	printf("%-40s|%4d|\n","23 << 4 =",  output);

	printf("----------------------------------------------\n");

	/*	16 RIGHTSHIFT 2 */
	output = z1 >> z4;
	printf("%-40s|%4d|\n","16 >> 2 =",  output);

	printf("----------------------------------------------\n");
	
	/*	23 LEFTSHIFT (23 RIGHTSHIFT 3) */
	output = (z2 << (z2 >> z6));
	printf("%-40s|%4d|\n","23 << (23 >> 3) =",  output);

	printf("----------------------------------------------\n");

	/*	(23 RIGHTSHIFT 2) AND (16 OR (NOT 12)) */
	output = (z2 >> z4) & (z1 | (~z3));
	printf("%-40s|%4d|\n","(23 >> 2) & (16 | (~12)) =",  output);

	printf("----------------------------------------------\n");

	return 0;
}