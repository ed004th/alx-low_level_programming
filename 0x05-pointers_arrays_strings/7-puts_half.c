#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to checked
 *
 * Return: half a string
*/
void puts_half(char *str)
{
	int l, half;

	l = 0;
	while (str[l] != '\0')
		l++;
		half = l / 2;

	if (l % 2 == 1)
		half++;
	while (half < l)
	{
		_putchar (str[half]);
		half++;
	}
	_putchar ('\n');
}
