#include "main.h"
/**
 * print_rev - a function that print a string in reverse
 * @s: char to checked
 *
 * Return: reverse string
*/
void print_rev(char *s)
{
	int b, c;

	c = 0;

	while (s[c] != '\0')
		c++;

	for (b = c - 1; b >= 0; b--)

	{
		_putchar (s[b]);
	}
	_putchar ('\n');
}

