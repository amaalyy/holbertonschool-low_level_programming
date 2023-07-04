#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: str
 * Return: n
*/
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s > '\0')
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
