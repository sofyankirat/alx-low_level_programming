#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms.
 *
 * Return: Always success 0.
*/

int main(void)
{
	long pro1, pro2 = 2, pro3 = 1, sum1 = 0, sum2 = 0, sum3 = 0, i = 1;

	while (i <= 10)
	{
		pro1 = pro2 + pro3;
		if (pro1 % 2 == 0)
		{
			sum1 += pro1;
		}
		pro3 = pro1 + pro2;
		if (pro3 % 2 == 0)
		{
			sum3 += pro3;
		}
		pro2 = pro3 + pro1;
		if (pro2 % 2 == 0)
		{
			sum2 += pro2;
		}
		i++;
	}
	printf("%ld\n", 2 + sum1 + sum2 + sum3);
	return (0);
}
