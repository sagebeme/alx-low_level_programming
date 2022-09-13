#include "main.h"

/**
	* print_sign - prints the sign of n and return boolean
	* @n: number
	* Description: prints the sign of n and return boolean
	* Return: int
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
