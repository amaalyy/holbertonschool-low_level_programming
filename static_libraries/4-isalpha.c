#include "main.h"
/**
 * _isalpha - entry point
 *@c: isalpha
 * Return: 1 if c is lowercase and uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
