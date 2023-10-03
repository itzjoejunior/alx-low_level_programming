#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: string to be copied
 * Return: a pointer to new string otherwise NULL
 */
char *_strdup(char *str)
{
	char *abb;
	int i, r = 0;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	abb = malloc(sizeof(char) * (i + 1));

	if (abb == NULL)
	return (NULL);

	for (r = 0; str[r]; r++)
	abb[r] = str[r];

	return (abb);
}
