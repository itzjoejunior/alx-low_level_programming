#include "main.h"
/**
* _memset - Program fills a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: tthe desired value to fill the memory with
* @n: number of bytes to be changed
*
* Return: modified array with the new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
