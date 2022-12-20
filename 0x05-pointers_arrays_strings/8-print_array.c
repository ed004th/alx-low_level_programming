#include "main.h"
/**
 * print_array -  a function that prints n elements of an array of integers
 * @a - char to checked
 * @n - char to checked
 *
 * Return: void
 *
*/
void print_array(int *a, int n)
{
	int i,n;
	for (i = 0; i < n; i++)
	{
		printf ("%d" + a[i]);
		if (i != n - 1)
		{
			printf (",");
			printf (" ");
		}
		printf ("/n");
	}
}
