#include "main.h"
/**
* _strncpy - copy a string
* @dest: destination string
* @src: source string to be copiede
* @n: maximum number of characters to copy
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
	dest[b] = src[b];
	b++;
	}
	while (b < n)
	{
	dest[b] = '\0';
	b++;
	}

	return (dest);
}
