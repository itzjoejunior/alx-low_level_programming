#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Outputs strings, each followed by a newline..
 * @separator: The string that separates each printed string.
 * @n: number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystrings;
	char *str;
	unsigned int a;

	va_start(mystrings, n);

	for (a = 0; a < n; a++)
	{
	str = va_arg(mystrings, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (a != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(mystrings);
}
