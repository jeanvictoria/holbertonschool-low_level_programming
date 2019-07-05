#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string one
 * @s2: string two
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int iterator = 0;

	while (s1[iterator] == s2[iterator] && s1[iterator] && s2[iterator])
	{
		iterator++;
	}
	return (s1[iterator] - s2[iterator]);
}

