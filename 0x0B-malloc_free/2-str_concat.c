#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: string 1
 * @s2: string 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *abb;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[ci] != '\0')
	ci++;
	abb = malloc(sizeof(char) * (i + ci + 1));

	if (abb == NULL)
	return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
	abb[i] = s1[i];
	i++;
	}

	while (s2[ci] != '\0')
	{
	abb[i] = s2[ci];
	i++, ci++;
	}
	abb[i] = '\0';
	return (abb);
}
