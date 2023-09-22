#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value.
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
