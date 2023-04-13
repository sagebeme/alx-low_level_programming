#include "search_algos.h"

/**
 * binary_search - Searches for value in arry
 *                 of integers using linear search
 * @array: A pointer to the first element of the array
 * @size: number of elements in the array
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         otherwise, the first index where the value is located.
 *
 * Description: Prints the (sub)array being searched after each change
 */
int binary_search(int *array, size_t size, int value)
{
	size_t iter, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (iter = left; iter < right; iter++)
			printf("%d, ", array[iter]);
		printf("%d\n", array[iter]);

		iter = left + (right - left) / 2;
		if (array[iter] == value)
			return (iter);
		if (array[iter] > value)
			right = iter - 1;
		else
			left = iter + 1;
	}

	return (-1);
}
