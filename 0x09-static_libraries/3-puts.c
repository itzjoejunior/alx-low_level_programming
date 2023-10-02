#include "main.h"
/**
 * _puts - Prints a string with a newline to the standard output
 * @str: the string to be displayed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
