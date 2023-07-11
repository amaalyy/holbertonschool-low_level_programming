#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: array
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * (strlen(str) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (strlen(str) + 1); i++)
	{
		a[i] = str[i];
	}
	return (a);

}
