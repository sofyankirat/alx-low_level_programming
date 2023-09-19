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
	long pro1, pro2 = 2, pro3 = 1, i = 1;

	printf("1, ");
	printf("2, ");
	while (i <= 16)
	{
		pro1 = pro2 + pro3;
		printf("%ld, ", pro1);
		pro3 = pro1 + pro2;
		printf("%ld, ", pro3);
		pro2 = pro3 + pro1;
		if (i != 16)
		{
			printf("%ld, ", pro2);
		}
		else
		{
			printf("%ld\n", pro2);
		}
		i++;
	}
	return (0);
}
