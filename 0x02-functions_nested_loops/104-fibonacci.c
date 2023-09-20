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
{unsigned long int pro1, pro2 = 2, pro3 = 1, i = 1, n1, n2, n3;

	unsigned long int h1, h2, h3, h4, h5, h6;

	printf("1, ");
	printf("2, ");
	while (i <= 32)
	{
		if (i <= 30)
		{pro1 = pro2 + pro3;
			printf("%lu, ", pro1);
			pro3 = pro1 + pro2;
			printf("%lu, ", pro3);
			pro2 = pro3 + pro1;
			printf("%lu, ", pro2); }
		else if (i == 31)
		{h1 = (pro3 / 10000000000) + (pro2 / 10000000000);
			h2 = (pro3 % 10000000000) + (pro2 % 10000000000);
			printf("%lu%lu, ", h1, h2);
			h3 = (pro2 / 10000000000) + (h1);
			h4 = (pro2 % 10000000000) + (h2);
			n1 = (h3 % 10) + (h4 / 10000000000);
			printf("%lu%lu%lu, ", (h3 / 10), n1, (h4 % 10000000000));
			h5 = (h1) + (h3);
			h6 = (h2) + (h4);
			n2 = (h5 % 10) + (h6 / 10000000000);
			printf("%lu%lu%lu, ", (h5 / 10), n2, (h6 % 10000000000)); }
		else
		{n3 = ((h3 + h5) % 10) + ((h4 + h6) / 10000000000);
			printf("%lu%lu%lu, ", ((h3 + h5) / 10), n3, ((h4 + h6) % 10000000000));
			printf("%lu%lu, ", ((h5 + (h3 + h5)) + 6),
			((h6 + (h4 + h6)) % 10000000000));
			printf("%lu%lu\n", (((h3 + h5) + (h5 + (h3 + h5)) + 10)),
			((h4 + h6) + ((h6 + (h4 + h6)) % 10000000000)) - 40000000000); }
		i++; }
	return (0); }
