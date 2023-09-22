#include "search_algos.h"
/**
 * binary_search - 
 * @array: 
 * @size: 
 * @value: 
 * Return: 
*/
int bsearch(int *array, size_t size, int value)
{
	return (bsearch(array, 0, size - 1, value));
}
/**
 * bsearch - 
 * @array:
 * @start:
 * @size:
 * @value:
 * Return: 
*/
int bsearch(int *array, int start, int size, int value)
{
	int mid = start + (size - start) / 2;

	if (size >= start)
	{
		if (array[mid] == value)
		{
			return (mid)
		}
		if (array[mid > value])
		{
			return (bsearch(array, start, mid - 1, value));
		}
		return (bsearch(array, mid + 1, size, value));
	}
	return (-1);
}
