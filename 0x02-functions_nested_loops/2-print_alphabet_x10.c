#include "main.h"
/*
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Description -  function that prints 10 times the alphabet in lowercase
 *
*/
void print_alphabet_x10(void);

{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
