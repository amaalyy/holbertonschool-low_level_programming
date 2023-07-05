#include "main.h"
/**
 *sqrts - help comparing two integers to find the square root
 *
 * @i: - integer to move further
 *
 * @j: - integer to find the square root
 *
 * Return: the function
 */
int sqrts(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		i++;
		return (sqrts(i, j));
	}
}
/**
 *_sqrt_recursion - function to give the square root of n
 *
 * @n: - the integer
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (sqrts(1, n));
}
