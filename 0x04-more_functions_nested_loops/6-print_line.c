#include "holberton.h"
/**
* print_line - print underscore
*@n : takes the integer given (size)
*/
void print_line(int n)
{
	int line = n;
	int iteration;
	int underscore = 95;

	for (iteration = 0; iteration < line; iteration++)
	{
		_putchar(underscore);
	}
	_putchar('\n');
}

