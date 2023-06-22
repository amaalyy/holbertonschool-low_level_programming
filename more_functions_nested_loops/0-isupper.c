#include "main.h"
/**
 * _isupper - if c is lowercase
 * @c: lowecase
 * Return: 1 if c is lowercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
