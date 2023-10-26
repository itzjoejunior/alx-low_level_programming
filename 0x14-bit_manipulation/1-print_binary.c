#include "main.h"


/**
 * _pow - The function computes (base raised to the power)
 * @base: The base or radix of the exponent
 * @power: The strength or potency of the exponent..
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)

{

	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
	num *= base;
	return (num);
}
/**
 * print_binary - Displays a number in binary format
 * @n: The numeric value to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)

{

	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
	check = n & divisor;
	if (check == divisor)
	{
	flag = 1;
	_putchar('1');
	}
	else if (flag == 1 || divisor == 1)
	{
	_putchar('0');
	}
	divisor >>= 1;
	}
}
