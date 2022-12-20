#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: char to checked
 * Return: reverse string
*/
void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	if (k < j)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		k++;
		j--;
	}
}

