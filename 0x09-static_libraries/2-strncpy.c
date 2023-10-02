#include "main.h"

/**
* _strncpy - copy a string
* @dest: destination string
* @src: source string to be copied
* @n: maximum number of characters to copy
*
* Return: the resulting copied string (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
