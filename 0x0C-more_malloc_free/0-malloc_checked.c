#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function allocates memory using the malloc function
 * @b: gives the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
