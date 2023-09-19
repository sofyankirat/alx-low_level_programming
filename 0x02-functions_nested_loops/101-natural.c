#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always success (0).
*/
int main(void)
{
	int product_1 = 0, product_2 = 0, sum, i = 1, j = 1;

	while (i * 3 < 1024)
	{
		if ((i * 3) % 5 != 0)
		{
		product_1 = product_1 + (i * 3);
		}
		i++;
	}
	while (j * 5 < 1024)
	{
		product_2 = product_2 + (j * 5);
		j++;
	}
	sum = product_1 + product_2;

	printf("%d\n", sum);
	return (0);
}
