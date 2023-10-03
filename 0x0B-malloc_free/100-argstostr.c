#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: number of arguments
 * @av: list of arguments
 * Return: new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *abb;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	l++;
	}
	l += ac;

	abb = malloc(sizeof(char) * l + 1);
	if (abb == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
	abb[r] = av[i][n];
	r++;
	}
	if (abb[r] == '\0')
	{
	abb[r++] = '\n';
	}
	}
	return (abb);
}
