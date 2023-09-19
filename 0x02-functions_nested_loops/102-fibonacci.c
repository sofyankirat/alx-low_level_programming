#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers.
 *
 * Return: Always success (0)
*/

int main(void)
{
	long long pro1, pro2 = 1, pro3 = 0;

	while (pro3 <= 20365011074)
	{
		if (pro3 == 20365011074)
		{
			printf("%lld\n", pro3);
			break;
		}
		pro1 = pro2 + pro3;
		printf("%lld, ", pro1);
		pro3 = pro1 + pro2;
		if (pro3 != 20365011074)
		{
			printf("%lld, ", pro3);
		}
		if (pro3 != 20365011074)
		{
		pro2 = pro3 + pro1;
		printf("%lld, ", pro2);
		}
	}
	return (0);
}
