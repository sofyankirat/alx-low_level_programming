#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always success 0.
*/

int main(void)
{
	long int pro1, pro2 = 2, pro3 = 1;

	printf("1, ");
	printf("2, ");
	for (int i = 1; i <= 32; i++)
	{
		pro1 = pro2 + pro3;
		printf("%lu, ", pro1);
		pro3 = pro1 + pro2;
		printf("%lu, ", pro3);
		pro2 = pro3 + pro1;
		if (i != 32)
		{
			printf("%lu, ", pro2);
		}
		else
		{
			printf("%lu\n", pro2);
			break;
		}
	}
	return (0);
}
