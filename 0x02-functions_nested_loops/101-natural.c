#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always success (0).
*/
int main(void)
{
	int product_1 = 0, product_2 = 0, sum;

	for (int i = 1; product_1 <= 1024; i++)
	{
		product_1 = product_1 + (i * 3);
	}
	for (int j = 1; product_2 <= 1024; j++)
	{
		product_2 = product_2 + (j * 5);
	}
	sum == product_1 + product_2;
	printf("%d\n", sum);
}
