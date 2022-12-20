#include "main.h"

/**
 * swap_int - a function that swap the value of two integers
 * @a: first int
 * @b: second int
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
