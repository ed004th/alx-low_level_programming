#include "main.h"
/**
 * _puts - a function that prints a string followed by a newline
 * @str: string to checked
 *
 * Return: length of the string
*/
void _puts(char *str)
{
	int b = 0;

		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	_putchar('\n');
}
