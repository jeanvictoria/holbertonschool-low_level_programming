#include "holberton.h"
/**
 * _isdigit - fuction for evaluate if have digit.
 * @c: variable to evaluate
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

