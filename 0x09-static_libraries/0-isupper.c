#include "main.h"
/**
* _isupper - Checks if a character is an uppercase letter
* @c: the character to check
*
* Return: if uppercase return 1, else return 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
