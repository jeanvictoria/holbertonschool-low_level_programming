#include "holberton.h"
/**
 * rev_string -reversing string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int size;
	int iterator;
	char auxiliar;

	size = _strlen(s);
	for (iterator = 0; iterator < (size / 2); iterator++)
	{
		auxiliar = *(s + iterator);
		*(s + iterator) = *(s + size  - iterator - 1);
		*(s + size - iterator - 1) = auxiliar;
	}
}
/**
 * _strlen - Calculate size of string
 * @s: string to becalculated
 * Return: size of string
 */
int _strlen(char *s)
{
	int iterator = 0;

	while (*(s + iterator) != '\0')
		iterator++;
	return (iterator);
}

