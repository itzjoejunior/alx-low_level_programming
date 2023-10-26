#include "main.h"

/**
 * binary_to_uint - A function that transforms a binary
 * numeral into an unsigned integer.
 * @b: A reference to a character array holding a binary numeral
 * Return: An unsigned integer representing the decimal value
 * of a binary number, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)

{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)

	{

	if (b[i] != '0' && b[i] != '1')

	return (0);

	}

	for (i = 0; b[i] != '\0'; i++)

	{

	num <<= 1;

	if (b[i] == '1')

	num += 1;

	}

	return (num);
}
