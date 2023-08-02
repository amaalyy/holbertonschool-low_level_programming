#include "3-calc.h"
/**
 * op_add - add 2 int
 * @a:int
 * @b:int
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 int
 * @a:int
 * @b:int
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipy 2 int
 * @a:int
 * @b:int
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 int
 * @a:int
 * @b:int
 * Return: result of the division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - entry point
 * @a:int
 * @b:int
* Return: remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
