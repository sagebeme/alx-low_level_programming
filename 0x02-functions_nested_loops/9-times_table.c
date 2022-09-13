#include "main.h"
#include <stdio.h>

/**
	* printProductAsChar - prints an integer as a char
	* @num1: number
	* @num2: number
	* Description: prints an integer as a char
	* Return: void
*/

void printProductAsChar(int num1, int num2)
{
	int result = num1 * num2;

	if (num2 == 0)
	{
		_putchar(result + '0');
	}
	else if (result <= 9)
	{
		_putchar(' ');
		_putchar(result + '0');
	}
	else
	{
		char digit1;
		char digit2 = (result % 10) + '0';

		while (result >= 10)
		{
			result = result / 10;
		}
		digit1 = result + '0';
		_putchar(digit1);
		_putchar(digit2);
	}
}

/**
	* times_table - prints multiplication table of 9x9
	* Description: prints multiplication table of 9x9
	* Return: void
*/

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			printProductAsChar(i, j);
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
