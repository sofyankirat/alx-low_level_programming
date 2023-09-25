#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: The char to print
 * @src: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0, n = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i++;
	while (n <= i)
	{
		dest[j] = src[n];
		j++;
		n++;
	}
	return (dest);
}
