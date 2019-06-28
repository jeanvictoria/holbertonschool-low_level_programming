#include "holberton.h"
/**
* more_numbers - print the numbers from 0 to 14
*
*/
void more_numbers(void)
{
	int iteration;
	int numbers;

	for (iteration = 0; iteration < 10; iteration++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}

