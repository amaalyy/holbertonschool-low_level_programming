#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: f string
 * @s2: s string
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
