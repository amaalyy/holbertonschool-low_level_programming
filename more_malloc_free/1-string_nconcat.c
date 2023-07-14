#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
/**
 * *string_nconcat - concatenates two strings
 * @s1: f string
 * @s2: s string
 * @n: int
 * Return: pointer
 * 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	sum = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (sum == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		sum[i] = s1[i];
	}
	for (j  = 0; j < n; j++)
	{
		sum[i] = s2[j];
		i++;
	}
	sum[i] = '\0';
	return (sum);

}
