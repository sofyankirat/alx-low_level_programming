#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		if (n >= 100)
		{
			_putchar('0' + n / 100)
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10); }
		else
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10); }
			_putchar(',');
			_putchar(' ');
			n--; }
	while (n < 98)
	{
		if (n <= -10 && n > 0)
		{
			_putchar('-');
			_putchar('0' + (n * -1) / 10);
			_putchar('0' + (n * -1) % 10);
			_putchar(',');
			_putchar(' '); }
		else if (n > -10 && n < 0)
		{
			_putchar('-');
			_putchar('0' + (n * -1));
			_putchar(',');
			_putchar(' '); }
		if (n <= 9 && n >= 0)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' '); }
		if (n >= 10)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' '); }
			n++; }
		if (n == 98)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar('\n'); }
}
