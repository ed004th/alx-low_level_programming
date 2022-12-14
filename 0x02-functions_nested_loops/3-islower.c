#include "main.h"
/**
 * _islower - checks for lowercase character and printg
 *@c: char is to check
 * Return: 1 if character is lower or upper 0 otherwise
 *
*/
int _islower(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
