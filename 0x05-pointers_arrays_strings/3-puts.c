#include "holberton.h"
/**
 * _puts - print string
 * @str: string to print
 */
void _puts(char *str)
{
	int iterator = 0;

	while (*(str + iterator) != '\0')
	{
		_putchar(*(str + iterator));
		iterator++;
	}
	_putchar(10);
}

