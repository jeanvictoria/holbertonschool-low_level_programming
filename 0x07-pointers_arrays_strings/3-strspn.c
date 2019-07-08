#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: Source string
 * @accept: char to be compared
 *
 * Return: the number of bytes compared
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int iterator_s = 0;
	unsigned int iterator_accept = 0;
	int counter = 0;
	int flag = 1;

	while (s[iterator_s] && flag)
	{
		while (accept[iterator_accept])
		{
			if (s[iterator_s] == accept[iterator_accept])
			{
				counter++;
				break;
			}
			iterator_accept++;
		}
		if (accept[iterator_accept] == '\0')
			flag = 0;
		iterator_accept = 0;
		iterator_s++;
	}

	return (counter);
}

