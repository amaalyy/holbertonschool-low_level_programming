#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: consist only of bytes
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
