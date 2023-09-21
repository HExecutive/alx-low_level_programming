#include "main.h"

/**
* _strncat - concatenate_2 strings
* @dest: destination of string
* @src: source string
* @n: number of byte to concatenate
* return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
