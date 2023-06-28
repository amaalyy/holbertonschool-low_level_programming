#include "main.h"
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
	rev = rev - 1;

	for (first = 0; first < rev / 2; first++, rev--)
	{
		empty = s[first];
		s[first] = s[rev];
		s[rev] = empty;
	}
}
