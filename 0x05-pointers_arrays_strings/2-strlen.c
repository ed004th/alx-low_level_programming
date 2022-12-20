#include "main.h"

/**
 * _strlen - a function that return the length of a string
 * @s: char to checked
 *
 * Return: 0
*/
int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}

