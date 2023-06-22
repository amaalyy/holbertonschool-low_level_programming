#include "main.h"
/**
 * print_last_digit - entry point
 *@n: print_sign
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
}
else
{
	n = -1 * (n % 10);
}
	_putchar(n + '0');
	return (n);

}
