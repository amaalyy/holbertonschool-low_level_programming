#include "main.h"
/**
 * *_strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: maximum number of chars
 * Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > i; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
		return (dest);
}
