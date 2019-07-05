#include "holberton.h"
/**
 * *_strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: ending point to copy
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iterator_dest;

	for (iterator_dest = 0; iterator_dest < n && src[iterator_dest]; iterator_dest++)
	{
		dest[iterator_dest] = src[iterator_dest];
	}
	while (iterator_dest < n)
	{
		dest[iterator_dest] = '\0';
		iterator_dest++;
	}
	return (dest);
}

