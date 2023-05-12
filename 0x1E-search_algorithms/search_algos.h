#include "search_algos.h"

/**
 * linear_search - Searches for value in arry
 *                of integers using linear search
 * @array: A pointer to the first element of the array
 * @size: number of elements in the array
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *            otherwise, the first index where the value is located.
 *
 * Description: Prints every value every time it's compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array == NULL)
		return (-1);
	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
	}
	return (-1);
}
