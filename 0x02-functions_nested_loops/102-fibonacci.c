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
	int pro1, pro2 = 1, pro3 = 0;

	while (pro3 <= 20365011074)
	{
		if (pro3 == 20365011074)
		{
			printf("%u\n", pro3);
			break;
		}
		pro1 = pro2 + pro3;
		printf("%u, ", pro1);
		pro3 = pro1 + pro2;
		if (pro3 != 20365011074)
		{
			printf("%u, ", pro3);
		}
		if (pro3 != 20365011074)
		{
		pro2 = pro3 + pro1;
		printf("%u, ", pro2);
		}
	}
	return (0);
}
