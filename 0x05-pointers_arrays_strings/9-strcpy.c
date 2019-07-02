#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - copy the string pointed by src
 * @destination: destination pointer
 * @src: source pointer
 * Return: destination pointer
 */
char *_strcpy(char *destination, char *src)
{
	int iterator = 0;

	do {
		*(destination + iterator) = *(src + iterator);
		iterator++;
	} while (*(src + iterator - 1) != '\0');
	return (destination);
}

