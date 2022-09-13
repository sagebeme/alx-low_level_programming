#include "main.h"
#include <stdio.h>

/**
	* print_to_98 - prints all numbers from n to 98
	* @n: number
	* Description: prints all numbers from n to 98
	* Return: void
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n++);
			} else
			{
				printf("%i, ", n++);
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n--);
			} else
			{
				printf("%i, ", n--);
			}
		}
	}
}
