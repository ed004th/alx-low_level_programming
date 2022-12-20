#include "main.h"
/**
 * print_rev - a function that print a string in reverse
 * @s: char to checked
 *
 * Return: reverse string
*/
void print_rev(char *s)
{
	int c = 0;

	for (s[c] != '\0')
		c++;
	for (c = c - 1; s[c] != '\0')
		c++;
	{
		_putchar (s[c]);
	}
	_putchar ('\n');
}

