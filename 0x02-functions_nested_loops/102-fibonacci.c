#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers.
 *
 * Return: Always success (0)
*/

int main(void)
{
	int pro1, pro2 = 2, pro3 = 1;

	printf("1, ");
	printf("2, ");
	for (int i = 1; i <= 16; i++)
	{
		pro1 = pro2 + pro3;
		printf("%u, ", pro1);
		pro3 = pro1 + pro2;
		printf("%u, ", pro3);
		pro2 = pro3 + pro1;
		if (i != 16)
		{
			printf("%u, ", pro2);
		}
		else
		{
			printf("%u\n, ", pro2);
		}
	}
	return (0);
}
