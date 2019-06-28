#include "holberton.h"
/**
* print_diagonal - print a diagonal with backslash
*@n : takes the integer given
*/
void print_diagonal(int n)
{
	int line = n;
	int iterator;
	int iterator2;
	int space = 32;
	int backslash = 92;

	if (line <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (iterator = 0; iterator < line; iterator++)
		{
			for (iterator2 = 0; iterator2 < iterator; iterator2++)
			{
				_putchar(space);
			}
			_putchar(backslash);
			_putchar('\n');
		}
	}
}

