#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	res = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			res = (res << 1) | 0;
		}
		else if (*b == '1')
		{
			res = (res << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (res);
}
