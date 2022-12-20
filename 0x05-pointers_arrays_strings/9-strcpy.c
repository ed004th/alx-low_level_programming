#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed to by src to the buffer pointed by dest
 * @src - char to be checked
 * 
 * Return: dest
 *
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (src != '\0')
	{
		*dest = *src;
		dest++
		src++;
	}
	*dest = '\0';
	return (start);
}
