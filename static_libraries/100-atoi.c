#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: If there are no numbers in the string return 0
*/
int _atoi(char *s)
{
	short a;
	int i, m, r;

	i = m = r = a = 0;
	m = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			r *= 10;
			r -= (s[i] - '0');
			a = 1;
		}
		else if (a == 1)
			break;
		i++;
	}
	r *= m;
	return (r);
}
