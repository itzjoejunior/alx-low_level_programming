#include "main.h"
/**
 * _puts - Prints a string with a newline to the standard output
 * @str: the string to be displayed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
