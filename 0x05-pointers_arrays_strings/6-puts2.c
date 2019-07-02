#include "holberton.h"
/**
 * puts2 - print char out
 * @str: string to print
 */
void puts2(char *str)
{
	int iterator = 0;

	while (*(str + iterator) != '\0')
	{
		if (iterator % 2 == 0)
			_putchar(*(str + iterator));
		iterator++;
	}
	_putchar(10);
}

