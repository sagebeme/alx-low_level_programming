#include "search_algos.h"

/*
 * jump_search - searches for a value
 *                 in a sorted array
 *
 * @array: pointer to the first element 
         of the array in search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If value is not present in array or the array is NULL, -1
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array
 *             Uses the square root of the array size as the jump step
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

        for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] = [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value cheked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
