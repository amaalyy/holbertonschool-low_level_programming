#include "main.h"
/**
 *verf - verify if the number is prime
 *
 * @i: - integer verify with
 *
 * @j: - where to place n
 *
 *Return: verf(i + 1, j
 *
 */
int verf(int i, int j)
{
	if (j == i)
		return (1);
	if (j % i == 0)
	{
		return (0);
	}
	if (i > j)
	{
		return (0);
	}
	if (j == 1)
	{
		return (0);
	}
	else
	{
		return (verf(i + 1, j));
	}
}
/**
 *is_prime_number - verify if the number is prime
 *
 * @n: - integer verify
 *
 * Return: 1 if the input integer is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	return (verf(2, n));
}
