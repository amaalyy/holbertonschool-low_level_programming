#include "search_algos.h"
/**
 * linear_search - unction that searches for a value in an array
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: if value is not present in array or if array is NULL return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i <= size - 1)
		{
			if (value != array[i])
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				i++;
			}
			if (value == array[i])
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
		}
	}
	return (-1);
}
