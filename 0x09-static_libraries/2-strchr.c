#include "main.h"

/**
* _strchr - the first occurrence of a character in a string
* @s: input string
* @c: target character to find
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
