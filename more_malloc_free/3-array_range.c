#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = 0;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		n += 1;
	}
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
