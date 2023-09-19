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
	unsigned long pro1, pro2 = 2, pro3 = 1, i = 1, h1, h2, h3, h4, h5, h6;

	printf("1, ");
	printf("2, ");
	while (i <= 32)
	{pro1 = pro2 + pro3;
		if (i <= 30)
		{printf("%lu, ", pro1); }
		else if (i > 30)
		{h1 = pro1 / 10000000000;
			h2 = pro1 % 10000000000;
			printf("%lu%lu, ", h1, h2); }
		pro3 = pro1 + pro2;
		if (i <= 30)
		{printf("%lu, ", pro3); }
		else if (i > 30)
		{h3 = pro3 / 10000000000;
			h4 = pro3 % 10000000000;
			printf("%lu%lu, ", h3, h4); }
		pro2 = pro3 + pro1;
		if (i <= 30)
		{printf("%lu, ", pro2); }
		else if (i > 30)
		{h5 = pro2 / 10000000000;
			h6 = pro2 % 10000000000;
			printf("%lu%lu, ", h5, h6); }
		i++;
	}
	return (0);
}
