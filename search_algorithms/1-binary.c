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
	int low, high, mid, i;
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array:%d", array[low]);
		
		for (i = low + 1; i < high; i++)
		{
			printf(", %d", array[i]);
			printf("\n")
		}
		mid = (low + high) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		if (value >array[mid])
		{
			high = mid - 1;
		}
		else
		low = mid + 1;
	}
	return (-1);
}
