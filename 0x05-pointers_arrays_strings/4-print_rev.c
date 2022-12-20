#include "main.h"
/**
 * print_rev - a function that print a string in reverse
 * @s - char to checked
 *
*/
void print_rev(char *s)
{
	int c;
	for (c = 0; s[c] != '\0'; c++)
	for (c = c - 1; s[c] != '\0'; c++)
	{
		_putchar (s[c]);
	}
	_putchar ('\n');
}

