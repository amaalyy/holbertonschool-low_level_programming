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
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	rev = length - 1;

	for (first = 0; first < length / 2; first++, rev--)
	{
		empty = s[first];
		s[first] = s[rev];
		s[rev] = empty;
	}
}
