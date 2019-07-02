#include "holberton.h"
/**
 * print_rev - print reverse of string
 * @s: string
 */
void print_rev(char *s)
{
	int size;

	size = _strlen(s) - 1;
	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar(10);
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

