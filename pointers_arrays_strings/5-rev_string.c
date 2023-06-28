#include "main.h"
#include <stdio.h>
/**
 * rev_string - function reverses a string
 * @s: pointer
 * Return: 0
*/
void rev_string(char *s)
{
	int rev;
	char empty;
	int first;

	for (rev = 0; s[rev] != '\0'; rev++)
	{
	}

	for (first = 0; first <= (rev / 2) + 1; first++, rev--)
	{
		empty = s[first];
		s[first] = s[rev - 1];
		s[rev - 1] = empty;
	}
}
