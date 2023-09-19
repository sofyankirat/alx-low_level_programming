#include "stdio.h"
#include "stdint.h"
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
	unsigned long pro1, pro2 = 2, pro3 = 1, i = 1;

	printf("1, ");
	printf("2, ");
	while (i <= 32)
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
		i++;
	}
	return (0);
}
