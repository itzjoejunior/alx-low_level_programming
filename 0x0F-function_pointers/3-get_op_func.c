#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Chooses the appropriate function to execute.
 * Performs the operation requested by the user.
 * @s: The operator provided as an argument.
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};

	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
	a++;

	return (ops[a].f);
}
